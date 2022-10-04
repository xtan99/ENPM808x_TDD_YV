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
#include <iterator>
#include "pid.hpp"


using std::cout;
using std::endl;

/**
 * @brief Construct a new Controller:: Controller object
 * 
 * @param kp 
 * @param ki 
 * @param kd 
 */
Controller::Controller(double kp, double ki, double kd){
    this->kp = kp;
    this->kd = kd;
    this->ki = ki;
}

/**
 * @brief Print the PID gains
 * 
 */
void Controller :: print_constants(){
            std::cout<< "Proportional Constant : " << kp<< ", Integral Constant : " << ki << ", Differetial Constant : " << kd <<endl;}

/**
 * @brief calculate the output of PID per iteration
 * @details Will compute the proportional, Integral and Differential values for the desired state 
 * @param target_setpoint
 * @param prev_output 
 * @return double
 */
double Controller::compute_pid(double target_setpoint, double prev_output)
{
    double error = target_setpoint - prev_output;
    double d_error = (error - prev_error)/dT ;

    double i_error = prev_error * dT + (error - prev_error) * dT/2;

    double out = kp * error + kd * d_error + ki*(i_error) + prev_output;
    prev_error = error;
    return out;
}

/**
 * @brief Main Feedback loop to reach the desired velocity.
 * @details Loop for certain iteration and compute the final output velocity using compute_pid method
 * @param target_setpoint Desired Velocity 
 * @param actual_velocity Actual velocity
 * @param iterations How many iterations you want to run for matching output velocity to desire velocity
 * @return double : new_velocity
 */
double Controller::calculate(double target_setpoint, double actual_velocity, int iterations)
{
    double current_velocity = actual_velocity;
    for ( int i = 0; i < iterations; i++)
    {
        current_velocity = compute_pid( target_setpoint, current_velocity);
    }
    return current_velocity;
    return 1.0;
}