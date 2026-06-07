// Program to check whether a number is prime 

#include<iostream>
using namespace std;

bool isPrime(int number)
{
    if(number <= 1)
    {
        return false;
    }
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    int number;

    cout << "Enter a number : ";
    cin >> number ;

    if(isPrime(number))
    {
        cout <<"Entered number is prime number.";
    }
    else{
        cout << "Entered number is not a Prime number.";
    }
    return 0;
}