#pragma once

#include "Sensor.hpp"

class DemoSensor final : public Sensor
{
public:
    Measurement measure() override
    {
        return Measurement{25.0f, 60.0f};
    }
};