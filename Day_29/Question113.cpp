// Program to menu-driven calculator

#include <iostream>
using namespace std;

int main()
{
    int choice;
    int a, b;

    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";

    cout << "Enter Choice: ";
    cin >> choice;

    cout << "Enter Two Numbers: ";
    cin >> a >> b;

    if (choice == 1)
    {
        cout << "Answer = " << a + b;
    }
    else if (choice == 2)
    {
        cout << "Answer = " << a - b;
    }
    else if (choice == 3)
    {
        cout << "Answer = " << a * b;
    }
    else if (choice == 4)
    {
        cout << "Answer = " << a / b;
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}