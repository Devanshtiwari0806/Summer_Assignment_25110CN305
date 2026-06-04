// Program to print number triangle

#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++)
    {
        for (int number = 1; number <= i; number++)
        {
            cout << number;
        }

        cout << endl;
    }

    return 0;
}