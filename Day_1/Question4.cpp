#include<iostream>
using namespace std;
int main ()
{
    long long n;
    int digits = 0;
    cout <<"Enter a positive integer:";
    cin >> n ;

    if (n==0)
    {
        digits = 1;
    }

    else{

while(n> 0)
{
    n = n/10;
    digits++;
}
    }

    cout <<"The number of digit of the entered number is :" << digits;
    
    return 0;
    
}