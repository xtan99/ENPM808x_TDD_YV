#pragma once

#include <iostream>

/**
 * @brief Controller class which will contain the computation for PID controller
 * 
 */
class Controller {
    private:
        // Only change the PID constants ->
        double kp=0.0, ki=0.0, kd= 0.0; 

        // Temp values Not to change
        double dT =0.01;
        double prev_error=0.0; 
    public:
        Controller(double kp, double ki, double kd);
        double compute_pid(double target_setpoint, double prev_output);
        double calculate(double target_setpoint, double actual_velocity,int iterations);
        void print_constants();
};