#include "PID.h"

using namespace std;

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
  // Add error to i_error
  PID::i_error += cte;

  // Calculate error difference for d_error
  PID::d_error = cte - PID::p_error;

  // Update p_error
  PID::p_error = cte;
}

double PID::TotalError() {
  // Calculate controller output
  return -PID::Kp * PID::p_error - PID::Ki * PID::i_error - PID::Kd * PID::d_error;
}

