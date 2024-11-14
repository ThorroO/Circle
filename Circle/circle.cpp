#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

double Circle::getRadius() const {
    return radius;
}

double Circle::getCircumference() const {
    return 2 * 3.14159 * radius;
}

bool Circle::operator==(const Circle& other) const {
    return radius == other.radius;
}

bool Circle::operator>(const Circle& other) const {
    return getCircumference() > other.getCircumference();
}

Circle& Circle::operator+=(double value) {
    radius += value;
    return *this;
}

Circle& Circle::operator-=(double value) {
    if (radius > value) {
        radius -= value;
    }
    return *this;
}