<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# NO CHECKED-IN PROTOBUF GENCODE
# source: math.proto

namespace Math;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>math.DivReply</code>
 */
class DivReply extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int64 quotient = 1;</code>
     */
    protected $quotient = 0;
    /**
     * Generated from protobuf field <code>int64 remainder = 2;</code>
     */
    protected $remainder = 0;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type int|string $quotient
     *     @type int|string $remainder
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\Math::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>int64 quotient = 1;</code>
     * @return int|string
     */
    public function getQuotient()
    {
        return $this->quotient;
    }

    /**
     * Generated from protobuf field <code>int64 quotient = 1;</code>
     * @param int|string $var
     * @return $this
     */
    public function setQuotient($var)
    {
        GPBUtil::checkInt64($var);
        $this->quotient = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>int64 remainder = 2;</code>
     * @return int|string
     */
    public function getRemainder()
    {
        return $this->remainder;
    }

    /**
     * Generated from protobuf field <code>int64 remainder = 2;</code>
     * @param int|string $var
     * @return $this
     */
    public function setRemainder($var)
    {
        GPBUtil::checkInt64($var);
        $this->remainder = $var;

        return $this;
    }

}

