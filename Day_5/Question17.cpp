// Program to check if a number is Perfect number

#include<iostream>
using namespace std;
int main() 
{
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number ;

    for (int i = 1; i < number; i++) 
    {
        if (number % i == 0) {
            sum += i ;
        }
    }

    if (sum == number)
       {
         cout << "Entered number is a Perfect Number.";
       }
    else
     {
         cout << "Entered number is not a Perfect Number.";
     }
    return 0 ;
}