#include <iostream>
#include "Employee.h"

using namespace std;

int Employee::employeeCount = 0;

Employee::Employee() {
	Date tempDt;
	tempDt.getDate(0, 0, 0);
	employeeCount += 1;
	employeeNo = employeeCount;
	compensation = 0;
	//dateOfHiring = tempDt;
	dateOfHiring = &tempDt;
	type = None;
}

Employee::Employee(eType ty, float comp, Date* date){
	employeeCount += 1;
	employeeNo = employeeCount;
	compensation = comp;
	//dateOfHiring = date;
	dateOfHiring = date;
	//dateOfHiring = Date.getDate(date.getDay(), date.getMonth(), date.getYear());
	type = ty;
}

void Employee::addEmployee(eType ty, float comp, Date* date) {
	employeeCount += 1;
	employeeNo = employeeCount;
	compensation = comp;
	//dateOfHiring = date;
	dateOfHiring = date;
	//dateOfHiring = Date.getDate(date.getDay(), date.getMonth(), date.getYear());
	type = ty;
}

void Employee::showEmployee(){
	cout << "Employee No : " << employeeNo << endl;
	cout << "Employee Category : " << type << endl;
	cout << "Employee Compensation : " << compensation << endl;
	cout << "Employee Date-of-Hiring : ";
	dateOfHiring->showDate();
}
