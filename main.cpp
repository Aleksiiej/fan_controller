#include "Controller.hpp"
#include "SlowThermometer/SlowThermometer.hpp"
#include "Fan.hpp"
#include "LcdDisplay.hpp"
#include <memory>
#include <iostream>

constexpr double targetTemperature = 36.6;
constexpr double tolerance = 0.5;

int main()
try {
    const SlowThermometer thermometer;
    const Fan fan;

    Controller newController{thermometer, fan, targetTemperature, tolerance, std::make_shared<LcdDisplay>()};
    newController.updateRpm();
    newController.displayInfo();

    return 0;
} catch (const std::exception & e) {
    std::cerr << e.what() << '\n';
    return -1;
}

