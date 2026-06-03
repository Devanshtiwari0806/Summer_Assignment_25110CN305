// Program to find Recursive sum of digits

#include <iostream>
using namespace std;

int Sum_digits(int number)
{
    if(number == 0)
    {
        return 0;
    }
    return (number % 10) + Sum_digits(number / 10);
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits = " << Sum_digits(number);

    return 0;
}