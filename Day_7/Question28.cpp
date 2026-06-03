// Program to find Recursive reverse number

#include <iostream>
using namespace std;

void reverseNumber(int number)
{
    if(number == 0)
    {
        return;
    }

    cout << number % 10;
    reverseNumber(number / 10);
}
int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Reversed number = ";
    reverseNumber(number);

    return 0;
}

