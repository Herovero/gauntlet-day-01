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

    Vec2 plus(const Vec2& other) const;

    void setX(float x);
    void setY(float y);
};