
#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
public:
    void Employeeinfo(int Employeetype, string EmployeeName, string EmployeeNumber, string HireDate, int Shift, double payrate, double AnnualSalary, double AnnualBonus, double MonthlyBonus, int RequiredTraining, int AttendedTraining)
    {
        cout << "Name: " << EmployeeName << endl << "Employee Number: " << EmployeeNumber << endl << "Hire Date: " << HireDate;

        if (Employeetype == 1)
        {
            Production product;
            product.Shiftinfo(Shift, payrate);
            cout << endl;
        }

        if (Employeetype == 2)
        {
            ShiftSupervisor supervisor;
            supervisor.Supervisorinfo(AnnualSalary, AnnualBonus);
        }

        if (Employeetype == 3)
        {
            Production product;
            product.Shiftinfo(Shift, payrate);

            TeamLeader teamleader;
            teamleader.TeamLeaderinfo(MonthlyBonus, RequiredTraining, AttendedTraining);
        }
    }
private:
    class Production
    {
    public:
        void Shiftinfo(int Shift, double payrate)
        {
            if (Shift == 1)
            {
                cout << endl << "Shift: Day" << endl;
            }

            if (Shift == 2)
            {
                cout << endl << "Shift: Night" << endl;
            }

            cout << "Hourly Pay Rate: $" << payrate << endl;
        }
    };

    class ShiftSupervisor
    {
    public:
        void Supervisorinfo(double AnnualSalary, double AnnualBonus)
        {
            cout << endl << "Annual Salary: $" << AnnualSalary << endl;
            cout << "Anuual Bonus: $" << AnnualBonus << endl << endl;
        }
    };

    class TeamLeader
    {
    public:
        void TeamLeaderinfo(double MonthlyBonus, int RequiredTraining, int AttendingTraining)
        {
            cout << "Montly Bonus: $" << MonthlyBonus << endl;
            cout << "Require Training: " << MonthlyBonus << endl;
            cout << "Attending Training: " << MonthlyBonus << endl;
        }
    };
};

int main()
{
    Employee employee;
    employee.Employeeinfo(1, "Paul Jones", "12345", "10/28/2024", 1, 20.25, 0, 0, 0, 0, 0);
    employee.Employeeinfo(1, "Harriet Smith", "54321", "6/15/2024", 2, 25.50, 0, 0, 0, 0, 0);
    employee.Employeeinfo(2, "Elmer Velasquez", "100325", "1/17/2024", 0, 0, 70000.00, 1000.00, 0, 0, 0);
    employee.Employeeinfo(3, "Mike Rogers", "64327", "2/7/2024", 2, 25.50, 0, 0, 150.00, 20, 10);
}

