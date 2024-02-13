//Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor.

#include<iostream>
using namespace std;
class employee
{
    string name;
    int emp_id, salary, performance;

public:
     employee()
     {
        cout << " enter employee id: ";
        cin >> emp_id;

        cout << " enter Employee name: ";
        cin >> name;

        cout << " enter employee performance: ";
        cin >> performance;

        if (performance >= 80)
        { 
            salary = 150000;
        }
        else if (performance >= 70)
        {
            salary = 125000;
        }
        else if (performance >= 60)
        {
            salary = 100000;    
        }
        else if (performance >= 50)
        {
            salary = 75000;
        }
        else
        {
            salary = 50000;
        }
     }  
     void print_data()
        { 
            cout << endl
                 << "Employee id:" << emp_id;
            cout << endl
                 << "employee name: " << name;
            cout << endl
                 << "employee salary:" << salary;     
        }
       
};

int main()
{
    employee emp;
    emp.print_data();
}
