// Program to create bank account system

#include <iostream>
using namespace std;

class Bank
{
public:
    string name;
    float balance;

    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void showData()
    {
        cout << "Name = " << name << endl;
        cout << "Balance = " << balance << endl;
    }
};
int main()
{
    Bank b;

    b.getData();
    b.showData();

    return 0;
}