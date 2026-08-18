#pragma once

#include <cstdint>
#include <protocol/DeviceId.hpp>

struct PacketHeaderV1
{
    DeviceId deviceId;
    uint16_t sequenceNumber;

    PacketHeaderV1(DeviceId deviceId, uint16_t sequenceNumber) : deviceId(deviceId), sequenceNumber(sequenceNumber) {}
};
