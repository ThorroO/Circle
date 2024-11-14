#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;

public:
    explicit Circle(double r = 1.0);

    double getRadius() const;
    double getCircumference() const;

    bool operator==(const Circle& other) const;
    bool operator>(const Circle& other) const;

    Circle& operator+=(double value);
    Circle& operator-=(double value);
};

#endif 