#pragma once

#include <Arduino.h>
#include <Motor.h>

#define MIN_SPEED 150
#define MAX_SPEED 255
#define SPEED_STEP_DURATION 15

class MotorMock : public Motor {
protected:
    void _off() override;

    void _dir_cw() override;

    void _dir_ccw() override;

public:
    MotorMock(uint8_t _pin1, uint8_t _pin2, uint8_t stop_diff, uint8_t min_change)
            : Motor(_pin1, _pin2, stop_diff, min_change) {};

    bool begin() override;

    void cycle() override;
};