#include <iostream>
#include "Date.h"

void Date::getDate(int d, int m, int y){
	day = d;
	month = m;
	year = y;
}

void Date::showDate(){
	std::cout << day << "/" << month << "/" << year << std::endl;
}

int Date::getDay() {
	return day;
}

int Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}
