// Program to find Recursive factorial

#include<iostream>
using namespace std ;

long long Factorial(int number)
{
    if(number == 0 || number == 1)
    {
        return 1 ;
    }

    return number * Factorial(number - 1) ;
}

int main()
{
    int number ;

    cout << "Enter a number: " ;
    cin >> number ;

    cout << "Factorial of the entered number is = " << Factorial(number) ;

    return 0 ;
}