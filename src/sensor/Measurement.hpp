#pragma once

struct Measurement
{
    float temperature;
    float humidity;

    Measurement(float temperature, float humidity) : temperature(temperature), humidity(humidity) {}
};