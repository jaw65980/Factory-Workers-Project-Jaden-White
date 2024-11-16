
#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
public:
    void Employeeinfo(string EmployeeName, string EmployeeNumber, string HireDate)
    {
        cout << "Name: " << EmployeeName << endl << "Employee Number: " << EmployeeNumber << endl << "Hire Date: " << HireDate;
    }
private:

};

int main()
{
    string name;
    string number;
    string hiredate;

    cin >> name;
    cin >> number;
    cin >> hiredate;

    Employee employee;
    employee.Employeeinfo(name, number, hiredate);
}

