#ifndef CIRCLE_H
#define CIRCLE_H


class Circle {
private:
    double radius;
    double originX;
    double originY;
public:
    Circle();
    Circle(double, double, double);
    void setRadius(double);
    void setOriginX(double);
    void setOriginY(double);
    double getRadius();
    double getOriginX();
    double getOriginY();
    double getArea();
    double getCircumference();
    double getDiameter();
};

#endif