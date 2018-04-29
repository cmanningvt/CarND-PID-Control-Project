#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  // Initialize gains
  PID::Kp = Kp;
  PID::Ki = Ki;
  PID::Kd = Kd;

  // Initialize errors
  PID::p_error = 0.0;
  PID::i_error = 0.0;
  PID::d_error = 0.0;
}

void PID::UpdateError(double cte) {
}

double PID::TotalError() {
  return PID::Kp * PID::p_error + PID::Ki * PID::i_error + PID::Kd * PID::d_error;
}

