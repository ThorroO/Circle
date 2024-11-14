#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    Circle circle1(5.0), circle2(3.0);
    cout << "Are circles equal in radius? " << (circle1 == circle2 ? "Yes" : "No") << endl;
    cout << "Is circle1 larger in circumference than circle2? " << (circle1 > circle2 ? "Yes" : "No") << endl;

    circle1 += 2.0;
    cout << "New radius of circle1: " << circle1.getRadius() << endl;

    return 0;
}