#pragma once

class Vec2 {
private:
    float _x;
    float _y;

public:
    Vec2(float x, float y);

    float x() const;
    float y() const;

    float length() const;
};