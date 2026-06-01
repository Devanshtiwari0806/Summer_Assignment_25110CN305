// Program to check if a number is a Strong number

#include <iostream>
using namespace std;

int main() 
{
    int number, temp, remainder, sum = 0, factorial ;

    cout << "Enter a number: ";
    cin >> number ;

    temp = number ;

    while (temp > 0) 
    {
        remainder = temp % 10 ;
        factorial = 1 ;

        for (int i = 1; i <= remainder; i++) 
        {
            factorial *= i ;
        }

        sum += factorial ;
        temp /= 10 ;
    }

    if (sum == number)
       {
        cout << number << " Entered number is a Strong Number.";
       }
        else
        {
            cout << number << " Entered number is not a Strong Number. ";
        }

    return 0;
}