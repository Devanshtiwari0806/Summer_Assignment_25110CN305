// Program to create ATM simulation

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 5000, amount;
    do
    {
        cout << "\n----- ATM MENU -----\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Current Balance = " << balance << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance += amount;

            cout << "Amount Deposited Successfully.\n";
        }
        else if (choice == 3)
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance -= amount;
                cout << "Amount Withdrawn Successfully.\n";
            }
            else
            {
                cout << "Insufficient Balance.\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Thank You for Using ATM.\n";
        }
        else
        {
            cout << "Invalid Choice.\n";
        }

    } while (choice != 4);
    return 0;
}