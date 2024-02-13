// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;

class student;
{
    string namne, address;
    char grade;
    int roll_num, std, sub_1, sub_2, sub_3, total;

public:
      void get_data()
    {
      cout << " enter your roll number: ";
      cin << roll_no;

      cout << " enter your name: ";
      cin << name;

      cout << " enter your Standard: ";
      cin << std;

      cout << " enter your address: ";
      cin << address;
    }
void cal_grade()
    {
        cout << "Enter your mark of subject 1 : ";
        cin >> sub_1;
        cout << "Enter your mark of subject 2 : ";
        cin >> sub_2;
        cout << "Enter your mark of subject 3 : ";
        cin >> sub_3;

        total = sub_1 + sub_2 + sub_3;

        if (sub_1 > 100 || sub_2 > 100 || sub_3 > 100 || sub_1 < 0 || sub_2 < 0 || sub_3 < 0)
        {
            cout << "Please enter marks between 0 to 100";
        }
        else
        {

            if (total >= 250)
            {
                grade = 'A';
            }
            else if (total >= 200)
            {
                grade = 'B';
            }
            else if (total >= 150)
            {
                grade = 'C';
            }
            else if (total >= 100)
            {
                grade = 'D';
            }
            else
            {
                grade = 'F';
            }
        }
    }

    void print_data()
    {
        cout << endl
             << "Your roll no. : " << roll_no;
        cout << endl
             << "Your Name : " << name;
        cout << endl
             << "Your Address : " << address;
        cout << endl
             << "Your Standard : " << std;
        cout << endl
             << "Mark of subject 1 : " << sub_1;
        cout << endl
             << "Mark of subject 2 : " << sub_2;
        cout << endl
             << "Mark of subject 3 : " << sub_3;
        cout << endl
             << "Your Grade : " << grade;
    }
};

int main()
{
    student stud;
    stud.get_data();
    stud.cal_grade();
    stud.print_data();
}


