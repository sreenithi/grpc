/* This file was generated by upb_generator from the input file:
 *
 *     src/proto/grpc/channelz/v2/property_list.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated.
 * NO CHECKED-IN PROTOBUF GENCODE */


#include "upb/reflection/def.h"
#include "src/proto/grpc/channelz/v2/property_list.upbdefs.h"
#include "src/proto/grpc/channelz/v2/property_list.upb_minitable.h"

extern _upb_DefPool_Init google_protobuf_any_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_duration_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_empty_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_timestamp_proto_upbdefinit;

static const char descriptor[1170] = {
    '\n', '.', 's', 'r', 'c', '/', 'p', 'r', 'o', 't', 'o', '/',
    'g', 'r', 'p', 'c', '/', 'c', 'h', 'a', 'n', 'n', 'e', 'l',
    'z', '/', 'v', '2', '/', 'p', 'r', 'o', 'p', 'e', 'r', 't',
    'y', '_', 'l', 'i', 's', 't', '.', 'p', 'r', 'o', 't', 'o',
    '\022', '\020', 'g', 'r', 'p', 'c', '.', 'c', 'h', 'a', 'n', 'n',
    'e', 'l', 'z', '.', 'v', '2', '\032', '\031', 'g', 'o', 'o', 'g',
    'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/',
    'a', 'n', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g',
    'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b',
    'u', 'f', '/', 'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', '.',
    'p', 'r', 'o', 't', 'o', '\032', '\033', 'g', 'o', 'o', 'g', 'l',
    'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'e',
    'm', 'p', 't', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037',
    'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o',
    'b', 'u', 'f', '/', 't', 'i', 'm', 'e', 's', 't', 'a', 'm',
    'p', '.', 'p', 'r', 'o', 't', 'o', '\"', '\252', '\001', '\n', '\014',
    'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'L', 'i', 's', 't',
    '\022', 'F', '\n', '\n', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'i',
    'e', 's', '\030', '\001', ' ', '\003', '(', '\013', '2', '&', '.', 'g',
    'r', 'p', 'c', '.', 'c', 'h', 'a', 'n', 'n', 'e', 'l', 'z',
    '.', 'v', '2', '.', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y',
    'L', 'i', 's', 't', '.', 'E', 'l', 'e', 'm', 'e', 'n', 't',
    'R', '\n', 'p', 'r', 'o', 'p', 'e', 'r', 't', 'i', 'e', 's',
    '\032', 'R', '\n', '\007', 'E', 'l', 'e', 'm', 'e', 'n', 't', '\022',
    '\020', '\n', '\003', 'k', 'e', 'y', '\030', '\001', ' ', '\001', '(', '\t',
    'R', '\003', 'k', 'e', 'y', '\022', '5', '\n', '\005', 'v', 'a', 'l',
    'u', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\037', '.', 'g',
    'r', 'p', 'c', '.', 'c', 'h', 'a', 'n', 'n', 'e', 'l', 'z',
    '.', 'v', '2', '.', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y',
    'V', 'a', 'l', 'u', 'e', 'R', '\005', 'v', 'a', 'l', 'u', 'e',
    '\"', '\264', '\001', '\n', '\014', 'P', 'r', 'o', 'p', 'e', 'r', 't',
    'y', 'G', 'r', 'i', 'd', '\022', '\030', '\n', '\007', 'c', 'o', 'l',
    'u', 'm', 'n', 's', '\030', '\001', ' ', '\003', '(', '\t', 'R', '\007',
    'c', 'o', 'l', 'u', 'm', 'n', 's', '\022', '6', '\n', '\004', 'r',
    'o', 'w', 's', '\030', '\002', ' ', '\003', '(', '\013', '2', '\"', '.',
    'g', 'r', 'p', 'c', '.', 'c', 'h', 'a', 'n', 'n', 'e', 'l',
    'z', '.', 'v', '2', '.', 'P', 'r', 'o', 'p', 'e', 'r', 't',
    'y', 'G', 'r', 'i', 'd', '.', 'R', 'o', 'w', 'R', '\004', 'r',
    'o', 'w', 's', '\032', 'R', '\n', '\003', 'R', 'o', 'w', '\022', '\024',
    '\n', '\005', 'l', 'a', 'b', 'e', 'l', '\030', '\001', ' ', '\001', '(',
    '\t', 'R', '\005', 'l', 'a', 'b', 'e', 'l', '\022', '5', '\n', '\005',
    'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\003', '(', '\013', '2',
    '\037', '.', 'g', 'r', 'p', 'c', '.', 'c', 'h', 'a', 'n', 'n',
    'e', 'l', 'z', '.', 'v', '2', '.', 'P', 'r', 'o', 'p', 'e',
    'r', 't', 'y', 'V', 'a', 'l', 'u', 'e', 'R', '\005', 'v', 'a',
    'l', 'u', 'e', '\"', '\240', '\001', '\n', '\r', 'P', 'r', 'o', 'p',
    'e', 'r', 't', 'y', 'T', 'a', 'b', 'l', 'e', '\022', '\030', '\n',
    '\007', 'c', 'o', 'l', 'u', 'm', 'n', 's', '\030', '\001', ' ', '\003',
    '(', '\t', 'R', '\007', 'c', 'o', 'l', 'u', 'm', 'n', 's', '\022',
    '7', '\n', '\004', 'r', 'o', 'w', 's', '\030', '\002', ' ', '\003', '(',
    '\013', '2', '#', '.', 'g', 'r', 'p', 'c', '.', 'c', 'h', 'a',
    'n', 'n', 'e', 'l', 'z', '.', 'v', '2', '.', 'P', 'r', 'o',
    'p', 'e', 'r', 't', 'y', 'T', 'a', 'b', 'l', 'e', '.', 'R',
    'o', 'w', 'R', '\004', 'r', 'o', 'w', 's', '\032', '<', '\n', '\003',
    'R', 'o', 'w', '\022', '5', '\n', '\005', 'v', 'a', 'l', 'u', 'e',
    '\030', '\001', ' ', '\003', '(', '\013', '2', '\037', '.', 'g', 'r', 'p',
    'c', '.', 'c', 'h', 'a', 'n', 'n', 'e', 'l', 'z', '.', 'v',
    '2', '.', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'V', 'a',
    'l', 'u', 'e', 'R', '\005', 'v', 'a', 'l', 'u', 'e', '\"', '\305',
    '\003', '\n', '\r', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'V',
    'a', 'l', 'u', 'e', '\022', '9', '\n', '\013', 'e', 'm', 'p', 't',
    'y', '_', 'v', 'a', 'l', 'u', 'e', '\030', '\001', ' ', '\001', '(',
    '\013', '2', '\026', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p',
    'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'E', 'm', 'p', 't',
    'y', 'H', '\000', 'R', '\n', 'e', 'm', 'p', 't', 'y', 'V', 'a',
    'l', 'u', 'e', '\022', '3', '\n', '\t', 'a', 'n', 'y', '_', 'v',
    'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\024',
    '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't',
    'o', 'b', 'u', 'f', '.', 'A', 'n', 'y', 'H', '\000', 'R', '\010',
    'a', 'n', 'y', 'V', 'a', 'l', 'u', 'e', '\022', '#', '\n', '\014',
    's', 't', 'r', 'i', 'n', 'g', '_', 'v', 'a', 'l', 'u', 'e',
    '\030', '\003', ' ', '\001', '(', '\t', 'H', '\000', 'R', '\013', 's', 't',
    'r', 'i', 'n', 'g', 'V', 'a', 'l', 'u', 'e', '\022', '!', '\n',
    '\013', 'i', 'n', 't', '6', '4', '_', 'v', 'a', 'l', 'u', 'e',
    '\030', '\004', ' ', '\001', '(', '\003', 'H', '\000', 'R', '\n', 'i', 'n',
    't', '6', '4', 'V', 'a', 'l', 'u', 'e', '\022', '#', '\n', '\014',
    'u', 'i', 'n', 't', '6', '4', '_', 'v', 'a', 'l', 'u', 'e',
    '\030', '\005', ' ', '\001', '(', '\004', 'H', '\000', 'R', '\013', 'u', 'i',
    'n', 't', '6', '4', 'V', 'a', 'l', 'u', 'e', '\022', '#', '\n',
    '\014', 'd', 'o', 'u', 'b', 'l', 'e', '_', 'v', 'a', 'l', 'u',
    'e', '\030', '\006', ' ', '\001', '(', '\001', 'H', '\000', 'R', '\013', 'd',
    'o', 'u', 'b', 'l', 'e', 'V', 'a', 'l', 'u', 'e', '\022', '\037',
    '\n', '\n', 'b', 'o', 'o', 'l', '_', 'v', 'a', 'l', 'u', 'e',
    '\030', '\007', ' ', '\001', '(', '\010', 'H', '\000', 'R', '\t', 'b', 'o',
    'o', 'l', 'V', 'a', 'l', 'u', 'e', '\022', 'E', '\n', '\017', 't',
    'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '_', 'v', 'a', 'l',
    'u', 'e', '\030', '\010', ' ', '\001', '(', '\013', '2', '\032', '.', 'g',
    'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b',
    'u', 'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p',
    'H', '\000', 'R', '\016', 't', 'i', 'm', 'e', 's', 't', 'a', 'm',
    'p', 'V', 'a', 'l', 'u', 'e', '\022', 'B', '\n', '\016', 'd', 'u',
    'r', 'a', 't', 'i', 'o', 'n', '_', 'v', 'a', 'l', 'u', 'e',
    '\030', '\t', ' ', '\001', '(', '\013', '2', '\031', '.', 'g', 'o', 'o',
    'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f',
    '.', 'D', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'H', '\000', 'R',
    '\r', 'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', 'V', 'a', 'l',
    'u', 'e', 'B', '\006', '\n', '\004', 'k', 'i', 'n', 'd', 'b', '\006',
    'p', 'r', 'o', 't', 'o', '3',
};

static _upb_DefPool_Init *deps[5] = {
    &google_protobuf_any_proto_upbdefinit,
    &google_protobuf_duration_proto_upbdefinit,
    &google_protobuf_empty_proto_upbdefinit,
    &google_protobuf_timestamp_proto_upbdefinit,
    NULL,
};

_upb_DefPool_Init src_proto_grpc_channelz_v2_property_list_proto_upbdefinit = {
    deps,
    &src_proto_grpc_channelz_v2_property_list_proto_upb_file_layout,
    "src/proto/grpc/channelz/v2/property_list.proto",
    UPB_STRINGVIEW_INIT(descriptor, sizeof(descriptor)),
};
