#include "Vec2.hpp"
#include <cmath>

Vec2::Vec2(float x, float y) {
    _x = x;
    _y = y;
}

float Vec2::x() const {
    return _x;
}

float Vec2::y() const {
    return _y;
}

float Vec2::length() const {
    return std::sqrt(_x * _x + _y * _y);
}