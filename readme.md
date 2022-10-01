# ENPM808x TD5 Assignment

## Overview

Simple starter C++ project with:

- cmake
- googletest

## Standard install via command-line
```
git clone --recursive https://github.com/yashveer-umd/ENPM808x_TD5_pairYV.git
cd <path to repository>/ENPM808x_TD5_pairYV
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Implementation
## Design
### CLASS DIAGRAM
![](UML/class_diagram.png)
### ACTIVITY DIAGRAM
![](UML/activity_diagram.png)

## TODO
* After the Implementation edit kp, ki, and kd values in test.cpp TEST function line 14.
* Implement compute_method, and calculate_method for Controller Class in [file](app/libs/PID.cpp)
* Tune and set your own PID Gains when intializing Controller Class.

## Authors
### Part 1
* Yashveer Jain (Driver)
* Vignesh Ravichandran Radhakrishnan (Navigator)