// Program to write function for Perfect number

#include <iostream>
using namespace std;

bool Perfect(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum == number;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (Perfect(number))
    {
        cout << "Entered number is a Perfect Number";
    }
    else
    {
        cout << "Entered number is not a Perfect Number";
    }

    return 0;
}