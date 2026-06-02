//Program to convert binary to decimal

#include<iostream>
using namespace std;
int main() 
{
    long long binary;
    cout << "Enter a number in binary form : ";
    cin >> binary;

    int decimal = 0, base = 1;

    while (binary > 0) 
    {
        int digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    cout << "The decimal form of the entered binary number is : " << decimal << endl;
    return 0;
}