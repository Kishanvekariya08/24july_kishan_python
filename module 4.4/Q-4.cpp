//Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class student
{
public:
    int roll_num, sub_1, sub_2, sub_3, total;
    float per;
    string name;

    int get_data() 
    {
      cout << "enter the name: ";
      cin >> name;
      cout << "enter the roll number: ";
      cin >> roll_num;
    }
};
class details: public subject
{
public:

    int get_details()
    {
        cout << "enter the marks of subject 1: ";
        cin >> sub_1;
        cout << "enter the marks of subject 2: ";
        cin >> sub_2;
        cout << "enter the marks of subject 3: ";
        cin >> sub_3;
    }
};

class marksheet: public student
{
public:

    int mark_calc()
    {
        total = sub_1 + sub_2 + sub_3;
        per = total / 300;
    }

    int print_marksheet()
    {
        cout << endl
             << "Roll number: " << roll_num;
        cout << endl
             << "Name: " << name;
        cout << endl
             << "Mark of subject 1: " << sub_1;
        cout << endl
             << "Mark of subject 2: " << sub_2;
        cout << endl
             << "Mark of subject 3: " << sub_3;
        cout << endl
             << "Total : " << total;
        cout << endl
             << "Percentage : " << per;
    }
};
int main()
{
     details detail;
    detail.get_data();
    detail.get_details();
    marksheet mark;
    mark.mark_calc();
    mark.print_marksheet();
    return 0;
};