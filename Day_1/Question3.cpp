#include<iostream>
using namespace std;
int main ()
{
    int n, factorial = 1;
    cout <<"Enter a positive integer:";
    cin >> n;
    
    for(int i=1; i <= n; ++i)
    {
        factorial *= i;
    }

    cout <<"The factorial of the entered number is:" << factorial ;
    
    return 0;
}