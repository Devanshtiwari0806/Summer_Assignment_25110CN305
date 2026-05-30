//Program to check whether a number is prime or not

#include<iostream>
using namespace std;
int main ()
{
int n, prime = 1;

cout <<"Enter a number: ";
cin >> n;

if(n <= 1)
{
    prime = 0;
}
else{
    for(int i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            prime = 0 ;
            break ;
        }
        else{
            prime = 1;
        }
    }
}
if(prime == 1)
{
    cout <<"The entered number is Prime." << endl;
}
else{
    cout <<"The entered number is not Prime." << endl;
}
return 0;
}