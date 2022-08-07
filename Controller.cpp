#include "Controller.hpp"

Controller::Controller(const SlowThermometer &thermometer_, const Fan &fan_, double targetTemperature_, double tolerance_, std::shared_ptr<LcdDisplay>) noexcept
{
}

void Controller::updateRpm() const noexcept {}

void Controller::displayInfo() const noexcept {}
