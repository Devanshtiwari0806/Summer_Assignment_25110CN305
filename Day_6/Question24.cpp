// Program to find x^n without pow()

#include<iostream>
using namespace std ;
int main() 
{
    int x, n;
    cout << "Enter the base value(x) and the exponent value(n) : ";
    cin >> x >> n ;

    long long result = 1 ;

    for (int i = 1; i <= n; i++) 
    {
        result *= x ;
    }

    cout << "Result : " << result ;
    return 0 ;
}