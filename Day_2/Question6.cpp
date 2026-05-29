// Program to reverse a number 

#include<iostream>
using namespace std;
int main ()
{
    int n, remainder, reversenumber = 0;
    cout <<"Enter a integer: ";
    cin >> n ;

    while(n != 0)
    {
        remainder = n % 10;
        reversenumber = reversenumber * 10 + remainder ;
        n = n/10 ;
    }

    cout <<"The reverse of the entered number is : " << reversenumber << endl ;
    
    return 0 ;
}