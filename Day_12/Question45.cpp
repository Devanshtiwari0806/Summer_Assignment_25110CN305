// Program to write function for Palindrome number 

#include <iostream>
using namespace std;

bool Palindrome(int number)
{
    int original_number = number;
    int reverse_number = 0;

    while (number > 0)
    {
        int digit = number % 10;
        reverse_number = reverse_number * 10 + digit;
        number = number / 10;
    }

    return original_number == reverse_number;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (Palindrome(number))
    {
        cout << "Entered number is a Palindrome.";
    }
    else
    {
        cout << "Entered number is not a Palindrome.";
    }

    return 0;
}