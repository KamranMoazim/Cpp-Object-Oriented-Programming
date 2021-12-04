#include <iostream>
#include "Circle.h"

using namespace std;

const double PI = 3.1415;

Circle::Circle() {
    radius = 0;
    originX = 0;
    originY = 0;
}

Circle::Circle(double r, double x, double y) {
    radius = r;
    originX = x;
    originY = y;
}
void Circle::setRadius(double r) {
    if (r > 0)
    {
        radius = r;
    }
    else
    {
        cout << "Invalid Radius" << endl;
    }
}
void Circle::setOriginX(double x) {
    originX = x;
}
void Circle::setOriginY(double y) {
    originY = y;
}


double Circle::getRadius() {
    return radius;
}
double Circle::getOriginX() {
    return originX;
}
double Circle::getOriginY() {
    return originY;
}


double Circle::getArea() {
    return PI * radius * radius;
}
double Circle::getDiameter() {
    return radius * 2;
}
double Circle::getCircumference() {
    return 2 * PI * radius;
}