#pragma once

#include "Measurement.hpp"

class Sensor
{
public:
    virtual ~Sensor() = default;

    virtual Measurement measure() = 0;
};
