// Program to print repeated number pattern

#include <iostream>
using namespace std;

int main()
{
    int Rows = 5;

    for (int i = 1; i <= Rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}