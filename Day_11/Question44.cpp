// Program to write a fucntion to find the factorial of a number

#include<iostream>
using namespace std;

long long Factorial(int number)
{
    long long fact = 1;
    for ( int i = 1; i <= number; i++ )
    {
        fact = fact * i;
    }
    return fact;
}
int main ()
{
    int number;

    cout <<" Enter a number : ";
    cin >> number;

    cout << "Factorial of " << number << " is : " << Factorial(number) << endl;
    return 0 ;
}