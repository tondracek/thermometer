#include <Arduino.h>
#include <sensor/DemoSensor.hpp>
#include <devicestatus/DeviceStatus.hpp>

void setup()
{
    Serial.begin(115200);

    DemoSensor demoSensor{};
    Sensor &sensor = demoSensor;

    const auto measurement = sensor.measure();
    const auto status = DeviceStatus{81};

    // const auto packet = encodePacket(measurement, status);

    // BleDevice.sendAdvertisement(packet);
}

void loop() {}

/*
    #include <BLEDevice.h>

    BLEDevice::init("Thermometer");

    BLEServer *server = BLEDevice::createServer();

    BLEAdvertising *advertising = BLEDevice::getAdvertising();
    advertising->start();

    advertising->setAdvertisementType(ADV_TYPE_NONCONN_IND);
    BLEAdvertisementData data = BLEAdvertisementData();
    advertising->setAdvertisementData(data);
*/