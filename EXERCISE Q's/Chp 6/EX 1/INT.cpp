// Implementing file for the Rectangle Class
#include <iostream>
#include <cstdlib>
#include "INT.h"

using namespace std;

MyInt::MyInt() {
    value1 = 0;
    value2 = 0;
}

MyInt::MyInt(int a, int b) {
    value1 = a;
    value2 = b;
}

int MyInt::add() {
    return value1 + value2;
}