#include "ina219.h"
#include <iostream>

int main() {
    // Example usage of the INA219 library
    INA219 sensor(0.1, 3.2); // Shunt resistance: 0.1 ohms, Max expected current: 3.2A

    sensor.configure(RANGE_16V, GAIN_8_320MV, ADC_12BIT, ADC_12BIT);

    std::cout << "Bus Voltage: " << sensor.voltage() << " V" << std::endl;
    std::cout << "Shunt Voltage: " << sensor.shunt_voltage() << " mV" << std::endl;
    std::cout << "Current: " << sensor.current() << " mA" << std::endl;
    std::cout << "Power: " << sensor.power() << " mW" << std::endl;

    return 0;
}
