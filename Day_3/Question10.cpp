//Program to print prime numbers in a range
 
#include<iostream>
using namespace std;
int main ()
{
int start, end ;

cout <<"Enter the range(start and end):";
cin >> start >> end;

cout <<"Prime numbers between "<< start <<" and "<< end << "are : "<< endl;

for(int i = start; i <= end; i++)
{
    if(i<2) continue;
    bool isPrime = true;

    for(int j=2; j<i; j++)
    {
        if(i%j ==0)
        {
            isPrime = false;
            break;
        }
    }

if(isPrime)
{
    cout << i << " " ;
}
}
return 0;
}
