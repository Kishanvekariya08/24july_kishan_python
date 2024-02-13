// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;

class student
{
public:
    int roll_num;
};

class test
{
public:
    int sub_1, sub_2;
};

class result : public student, public test
{
public:
    int total;

    int get_result()
    {
        cout << "Enter roll num: ";
        cin >> roll_num;
        cout << "Enter Mark of subject 1 : ";
        cin >> sub_1;
        cout << "Enter Mark of subject 2 : ";
        cin >> sub_2;
    }

    int print_result()
    {
        cout << endl
             << "Roll Number : " << roll_num;
        cout << endl
             << "Mark of Subject 1 : " << sub_1;
        cout << endl
             << "Mark of subject 2 : " << sub_2;
        total = sub_1 + sub_2;
        cout << endl
             << "Total Marks : " << total;
    }
};

int main()
{
    result res;
    res.get_result();
    res.print_result();
    return 0;
}