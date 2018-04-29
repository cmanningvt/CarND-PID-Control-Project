## Writeup

---

**PID Control Project**

[//]: # (Image References)
[image1]: ./examples/car_not_car.png


## [Rubric](https://review.udacity.com/#!/rubrics/824/view) Points
### Here I will consider the rubric points individually and describe how I addressed each point in my implementation.  

---
### Writeup / README

#### 1. Your code should compile.

The following is the the output of the command "cmake .. && make"

-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /sdc_T2_P4_PIDControl/build
Scanning dependencies of target pid
[ 33%] Building CXX object CMakeFiles/pid.dir/src/PID.cpp.o
[ 66%] Building CXX object CMakeFiles/pid.dir/src/main.cpp.o
[100%] Linking CXX executable pid
[100%] Built target pid


This shows no errors and the code compiles successfully.

#### 2. The PID procedure follows what was taught in the lessons.

The algorithm is implemented as discussed in the lessons. The PID class defined in src/PID.h and src/PID.c has three gain values (for the proportional, integral, and derivative parts) and calculates the three error values.

#### 3. Describe the effect each of the P, I, D components had in your implementation.

The D component of the PID algorithm helps to reduce the overshoot by counteracting high P-gains. The I component helps to reduce the steady state error of the controller regardless of a standard bias in the plant/system.

#### 4. Describe how the final hyperparameters were chosen.

The final parameters were chosen through manual tuning. Initially I and D components were set to 0. A P component was chosen that could travel a short portion of the track successfully. This had an oscillation around the center of the road. Adding a D parameter to reduce the overshoot was necessary. Then adding a small I parameter helped significantly when traveling around turns on the track.

#### 5. The vehicle must successfully drive a lap around the track.

The vehicle successfully travels a complete lap around the track.