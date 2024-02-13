//Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.

#include <iostream>

using namespace std;

class bank_account
{
    int acc_num, balance, deposit_amt, withdraw_amt;

    public:
          void
          get_data()
          {
            cout << "enter account number: ";
            cin >> acc_num;
            cout << "enter amount: ";
            cin >> balance;
          }
          void diposite()
          {
            cout << " enter deposit amount: ";
            cin >> deposit_amt;
            balance = balance + deposit_amt;

          }
          void withdraw()
          {
            cout << " enter withdraw amount: ";
            cin >> withdraw_amt;
            if (withdraw_amt > balance)
            {
                cout << " you have no enough money to withdraw cash";
            }
            else
            {
                balance = balance - withdraw_amt;
            }
          }
};
int main()
{
    int choice;
    bank_account bank_acc;
    bank_acc.get_data();
    cout << "what you want to do:" << endl
        << " 1. withdraw " << endl
        << " 2. diposite ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        bank_acc.diposite();
        break;

    case 2:
        bank_acc.withdraw();
        break;
    
    default:
        cout << " invalid choice ";
        break;
    }
}