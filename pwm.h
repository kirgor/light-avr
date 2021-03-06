#ifdef KAVR_FEATURE_PWM

#pragma once
#include <stdint.h>
#include <avr/io.h>

#define PWM_DISABLED		0
#define PWM_PRESCALER_1		1
#define PWM_PRESCALER_8		2
#define PWM_PRESCALER_64	3
#define PWM_PRESCALER_256	4
#define PWM_PRESCALER_1024	5

#define pwm_pb1_write(value) OCR1A=value
#define pwm_pb2_write(value) OCR1B=value
#define pwm_pd5_write(value) OCR0B=value
#define pwm_pd6_write(value) OCR0A=value

void pwm_0_init(uint8_t prescaler_mask);

void pwm_1_init(uint8_t prescaler_mask);

#endif
