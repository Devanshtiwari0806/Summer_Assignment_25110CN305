// Program to find product of digits of a numbers

#include<iostream>
using namespace std;
int main ()
{
    int n, digit, product = 1 ;
    cout <<"Enter a number :";
    cin >> n ;

    while(n > 0)
    {
        digit = n%10 ;
        product = product * digit ;
        n = n/10;
    }

    cout <<"The product of the digits of the entered number is :" << product << endl ;
    
    return 0 ;
}