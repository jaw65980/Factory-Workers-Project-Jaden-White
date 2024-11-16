
#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
public:
    void Employeeinfo(string EmployeeName, string EmployeeNumber, string HireDate, int Shift, double payrate)
    {
        cout << "Name: " << EmployeeName << endl << "Employee Number: " << EmployeeNumber << endl << "Hire Date: " << HireDate;
        Production product;
        product.Shiftinfo(Shift, payrate);
    }
private:
    class Production
    {
    public:
        void Shiftinfo(int Shift, double payrate)
        {
            if (Shift == 1)
            {
                cout << endl << "Shift: Day" << payrate << endl;
            }

            if (Shift == 2)
            {
                cout << endl << "Shift: Night" << endl;
            }

            cout << "Hourly Pay Rate: $" << payrate << endl << endl;
        }
    };
};

int main()
{
    Employee employee;
    employee.Employeeinfo("Paul Jones", "12345", "10/28/2024", 1, 20.25);
    employee.Employeeinfo("Harriet Smith", "54321", "6/15/2024", 2, 25.50);
}

