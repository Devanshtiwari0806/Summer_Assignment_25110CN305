//Program to convert decimal to binary

#include<iostream>
using namespace std ;

int main() 
{
    int number ;
    cout << "Enter a decimal number : ";
    cin >> number ;

    long long binary = 0 ;
    int place = 1 ;

    while (number > 0) 
    {
        int rem = number % 2 ;
        binary += rem * place ;
        place *= 10 ;
        number /= 2 ;
    }
    cout <<"The binary conversion for the entered decimal number is: " << binary << endl ;
    return 0 ;
}