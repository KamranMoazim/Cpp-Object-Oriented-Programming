#ifndef DATE_H
#define DATE_H

class Date
{
private:
	int day;
	int month;
	int year;

public:
	void getDate(int, int, int);
	void showDate();
	int getDay();
	int getMonth();
	int getYear();
};

#endif