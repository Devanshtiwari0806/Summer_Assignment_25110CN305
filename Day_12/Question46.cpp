// Program to write a function for armstrong number

#include <iostream>
#include <cmath>
using namespace std;

bool Armstrong(int number)
{
    int original_number = number;
    int digits = 0;
    int sum = 0;

    int temp = number;

    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = number;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    return sum == original_number;
}

int main()
{
    int number;

    cout << "Enter a number : ";
    cin >> number;

    if (Armstrong(number))
    {
        cout << "Entered number is an Armstrong Number";
    }
    else
    {
        cout << "Entered number is not an Armstrong Number";
    }
    return 0;
}