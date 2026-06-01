// Program to find the largest prime factor of a number

#include <iostream>
using namespace std;

int main() 
{
    int number, largest_factor = 0;

    cout << "Enter a number: " ;
    cin >> number ;

    for (int i = 2; i <= number; i++) 
    {
        while (number % i == 0) 
        {
            largest_factor = i ;
            number /= i ;
        }
    }

    cout << "Largest Prime Factor of " << number << " is : " << largest_factor ;

    return 0;
}