#include "MotorMock.h"

bool MotorMock::begin() {
    return Motor::begin();
}

void MotorMock::_off() {
    LOG("m | m | off");
}

void MotorMock::_dir_cw() {
    LOG("m | m | cw");
}

void MotorMock::_dir_ccw() {
    LOG("m | m | ccw");
}

void MotorMock::cycle() {
    Motor::cycle();
}
