// Program to find the sum of digits of a number
 
#include<iostream>
using namespace std;
int main ()
{
    int n, digit, sum = 0;
    cout <<"Enter a number :";
    cin >> n ;

    if(n < 0)
    {
        n = -n ;
    }
    
    while(n > 0)
    {
        digit = n % 10 ;
        sum = sum + digit ;
        n = n/10 ;
    }

    cout <<"The sum of the digits of the entered number is:" << sum << endl;
    
    return 0;
}