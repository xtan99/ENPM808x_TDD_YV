#include <gtest/gtest.h>
# include "pid.hpp"

TEST(PIDTest, checkComputeMethod) {
  // If the target setpoint and prev_output is same then the compute_method will return prev_output
  Controller pid(1,1,1);
  double target_setpoint = 0;
  double prev_output= 0; 
  EXPECT_EQ(pid.compute_pid(target_setpoint,prev_output), prev_output);
}

TEST(TestController, CheckOutputVelocityAfterCertainIteration) {
  // TODO Change kp, ki, kd
  double kp=1.0, ki=1.0, kd= 0.0;
  
  // No Change require in below code
  Controller pid(kp,ki,kd);
  pid.print_constants();
  double target_setpoint = 0;
  double actual_velocity = 1;
  int iterations = 1000;
  double output = pid.calculate(target_setpoint,actual_velocity,iterations);
  EXPECT_GE(output, 0.00);
  EXPECT_LE(output, 1e-5);
}