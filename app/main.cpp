#include <iostream>
#include "pid.hpp"

int main(){
    Controller pid;
    pid.set_constants(100.0,2,4);
    pid.print_constants();
}
