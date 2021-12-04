#ifndef POINT_H
#define POINT_H


using namespace std;

class Point {
private:
    double* vec;
public:
    Point(double xIn=0, double yIn=0) {
        vec = new double[2];
        vec[0] = xIn;
        vec[1] = yIn;
    }
    void setX(double xIn) {
        vec[0] = xIn;
    }
    void setY(double yIn) {
        vec[1] = yIn;
    }
    double getX() {
        return vec[0];
    }
    double getY() {
        return vec[1];
    }
    double* getVec() {
        return vec;
    }
};

#endif