/**
 * @file main.cpp
 * @author Yashveer Jain (github.com/yashveer-umd)
 * @brief 
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "pid.hpp"

int main() {
    Controller pid(0, 1, 0);
    // Reference value is desired velocity
    double actual_velocity = 1;
    double target_setpoint = 0.0;
    int iterations = 1000;
    pid.print_constants();
    double output = pid.calculate(target_setpoint, actual_velocity, iterations);
    std::cout << " Final Output : "<<output << " " <<std::endl ;
    return 0;
}
