#pragma once
#include "SlowThermometer/SlowThermometer.hpp"
#include "Fan.hpp"
#include <memory>

class LcdDisplay;

class Controller
{
public:
    Controller(const SlowThermometer &thermometer_, const Fan &fan_, double targetTemperature_, double tolerance_, std::shared_ptr<LcdDisplay>) noexcept;
    Controller(const Controller &other) = delete;
    Controller(const Controller &&other) = delete;

    void updateRpm() const noexcept;
    void displayInfo() const noexcept;
};