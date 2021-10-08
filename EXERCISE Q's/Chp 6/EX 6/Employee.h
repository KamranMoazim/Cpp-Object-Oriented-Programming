#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.cpp"

// my EMPLOYEE Class Declaration

enum eType { Laborer, Secretary, Manager, None };

class Employee {
private:
    int employeeNo;
    float compensation;
    //Date dateOfHiring;
    Date* dateOfHiring;
    eType type;
public:
    static int employeeCount;
    Employee();
    //Employee(eType, float, Date);
    Employee(eType, float, Date*);
    //void addEmployee(eType, float, Date);
    void addEmployee(eType, float, Date*);
    void showEmployee();
};

#endif