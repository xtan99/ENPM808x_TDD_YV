/**
 * @file PID.cpp
 * @author Yashveer Jain (github.com/yashveer-umd)
 * @brief 
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "pid.hpp"

void Controller::set_constants(double kp, double ki, double kd){
    this->kp = kp;
    this->kd = kd;
    this->ki = ki;
}

void Controller :: print_constants(){
            std::cout<< "Proportional Constant : " << kp<< "Integral Constant : " << ki << "Differetial Constant : " << kd;}
// class PID {
//     void set_
// }