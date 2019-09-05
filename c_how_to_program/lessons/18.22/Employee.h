#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
public:
    Employee(const string &, const string &);
    ~Employee();
    string getFirstName() const;
    string getLastName() const;
    static int getCount();
private:
    string firstName;
    string lastName;
    static int count;
};

#endif