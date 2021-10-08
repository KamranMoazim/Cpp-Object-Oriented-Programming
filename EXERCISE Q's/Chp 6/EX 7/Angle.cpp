#include <iostream>
#include "Angle.h"

Angle::Angle() {
	degrees = 0;
	minutes = 0;
	direction = 'N';
}

Angle::Angle(int deg, double min, char dir) {
	degrees = deg;
	minutes = min;
	direction = dir;
}

void Angle::inputAngle(int deg, double min, char dir) {
	degrees = deg;
	minutes = min;
	direction = dir;
}

void Angle::showAngle(){
	std::cout << degrees << '\xF8' << minutes << "\'" << direction << std::endl;
}
