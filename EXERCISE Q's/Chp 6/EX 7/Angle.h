#ifndef ANGLE_H
#define ANGLE_H

class Angle
{
private:
	int degrees;
	double minutes;
	char direction;

public:
	Angle();
	Angle(int, double, char);
	void inputAngle(int, double, char);
	void showAngle();
};

#endif