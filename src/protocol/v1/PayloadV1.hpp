#pragma once

#include <cstdint>

struct PayloadV1
{
    int16_t temperature;
    uint8_t battery;

    PayloadV1(int16_t temperature, uint8_t battery) : temperature(temperature), battery(battery) {}
};

// funkce `encode` pro převod na bajty
// [HEADER][PAYLOAD]
