#ifndef __CONTROL_H
#define __CONTROL_H

#include "encoder.h"
#include "hmi.h"
#include "motor.h"
#include "setup.h"

bool collision_detected(void);
float get_left_pwm(void);
float get_right_pwm(void);
float get_target_linear_speed(void);
float get_target_angular_speed(void);
float get_ideal_linear_speed(void);
float get_ideal_angular_speed(void);
void motor_control(void);
void set_target_linear_speed(float speed);
void set_target_angular_speed(float speed);
void update_ideal_speed(void);

#endif /* __CONTROL_H */
