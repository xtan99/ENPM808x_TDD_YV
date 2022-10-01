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
    // TODO
    double kp = 0.0, ki = 0.0, kd = 0.0;
    double actual_velocity = 1;
    double target_setpoint = 0.0;

    // Code
    Controller pid(kp, ki, kd);
    int iterations = 1000;
    double output = pid.calculate(target_setpoint, actual_velocity, iterations);
    std::cout << " Final Output : "<<output << " " <<std::endl ;
    return 0;
}
