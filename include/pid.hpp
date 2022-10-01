#pragma once

#include <iostream>

class Controller {
    private:
        double kp=0.0, ki=0.0, kd= 0.0;
    public:
        double compute(double reference_value, double output_value);
        void set_constants(double kp, double ki, double kd);
        void print_constants();
};