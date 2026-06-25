// Program to menu-driven string operation system

#include <iostream>
using namespace std;

int main()
{
    string str;
    int choice;

    cout << "Enter String: ";
    cin >> str;

    cout << "1. Length\n";
    cout << "2. Display String\n";

    cin >> choice;

    if (choice == 1)
    {
        cout << "Length = " << str.length();
    }
    else if (choice == 2)
    {
        cout << "String = " << str;
    }

    return 0;
}