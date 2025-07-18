//
//
// Copyright 2015 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//

#include <grpc/status.h>

#include <memory>

#include "absl/log/log.h"
#include "gtest/gtest.h"
#include "src/core/lib/channel/channel_args.h"
#include "src/core/util/time.h"
#include "test/core/end2end/end2end_tests.h"

namespace grpc_core {

static void OneRequestAndShutdownServer(CoreEnd2endTest& test) {
  LOG(ERROR) << "Create client side call";
  auto c = test.NewClientCall("/service/method")
               .Timeout(Duration::Seconds(30))
               .Create();
  IncomingMetadata server_initial_md;
  IncomingStatusOnClient server_status;
  LOG(ERROR) << "Start initial batch";
  c.NewBatch(1)
      .SendInitialMetadata({})
      .SendCloseFromClient()
      .RecvInitialMetadata(server_initial_md)
      .RecvStatusOnClient(server_status);
  auto s = test.RequestCall(101);
  test.Expect(101, true);
  test.Step();
  test.ShutdownServerAndNotify(1000);
  IncomingCloseOnServer client_closed;
  s.NewBatch(102)
      .SendInitialMetadata({})
      .SendStatusFromServer(GRPC_STATUS_UNIMPLEMENTED, "xyz", {})
      .RecvCloseOnServer(client_closed);
  test.Expect(102, true);
  test.Expect(1, true);
  test.Expect(1000, true);
  test.Step();
  // Please refer https://github.com/grpc/grpc/issues/21221 for additional
  // details.
  // TODO(yashykt@) - The following line should be removable after C-Core
  // correctly handles GOAWAY frames. Internal Reference b/135458602. If this
  // test remains flaky even after this, an alternative fix would be to send a
  // request when the server is in the shut down state.
  test.Step();

  EXPECT_EQ(server_status.status(), GRPC_STATUS_UNIMPLEMENTED);
  EXPECT_EQ(server_status.message(), "xyz");
  EXPECT_EQ(s.method(), "/service/method");
  EXPECT_FALSE(client_closed.was_cancelled());
}

CORE_END2END_TEST(CoreClientChannelTests, DisappearingServer) {
  // TODO(ctiller): Currently v3 connections are tracked as a set of
  // OrphanablePtr<ServerTransport> in the Server class. This allows us to only
  // remove and destroy them which means we have no means of sending a goaway
  // (and chaotic good anyway doesn't yet support goaways).
  // After the `server_listener` experiment is completely rolled out we should
  // migrate both v1 server channels and v3 transports to a common data
  // structure around LogicalConnection instances. We could then use that
  // data structure to broadcast goaways to transports at the appropriate time.
  SKIP_IF_V3();
  OneRequestAndShutdownServer(*this);
  InitServer(DefaultServerArgs());
  OneRequestAndShutdownServer(*this);
}

}  // namespace grpc_core
