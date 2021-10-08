#include <iostream>

#include "Employee.cpp"
//#include "Date.cpp"

using namespace std;

int main()
{
    int month;
    int day;
    int year;

    //Employee kam1;
    //Employee kam2(500);
    //Employee kam3;
    //kam1.addCompensation(600);
    //kam3.addCompensation(400);
    //cout << kam1.showCompensation() << endl;
    //cout << kam2.showCompensation() << endl;
    //cout << kam3.showCompensation() << endl;
    //cout << kam3.employeeCount << endl;



    Date* myDate;
    myDate = new Date;
    //char separator;
    //cout << "Enter date in this format dd/mm/yy : ";
    //if (cin >> day >> separator && separator == '/' && cin >> month >> separator && separator == '/' && cin >> year)
    //{
    //    //cout << "you entered " << month << '/' << day << '/' << year << '\n';
    //    myDate.getDate(day, month, year);
    //}
    //else cerr << "badly formed input\n";
    //myDate.showDate();

    myDate->getDate(12, 12, 12);
    //cout << myDate->getDay() << endl;
    //cout << myDate << endl;
    Employee kam(Manager, 12, myDate);
    //cout << kam.employeeCount << endl;
    kam.showEmployee();

    return 0;
}