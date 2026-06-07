// Program to write function to find sum of two numbers

#include<iostream>
using namespace std;

int Sum(int number1, int number2)
{
    return number1 + number2;
}

int main ()
{
    int number1, number2;

    cout << "Enter two numbers : ";
    cin >> number1 >> number2;

    cout << " Sum = " << Sum(number1, number2) ;

    return 0;
}