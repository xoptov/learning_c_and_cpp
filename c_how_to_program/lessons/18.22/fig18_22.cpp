#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    cout << "Number of employees before creation of any objects is "
         << Employee::getCount() << endl;

    {
        Employee e1("Maksim", "Khortov");
        Employee e2("Jenna", "Haze");

        cout << "Number of employees after objects are instantiated is "
             << Employee::getCount();

        cout << "\n\nEmployee 1: "
             << e1.getFirstName() << ' ' << e1.getLastName()
             << "\nEmployee 2: " << e2.getFirstName() << ' ' << e2.getLastName() << "\n\n";
    }

    cout << "Number of employees after objects are deleted is "
             << Employee::getCount() << endl;
}