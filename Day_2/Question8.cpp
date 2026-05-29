// Program to check whether a number is Palindrome

#include<iostream>
using namespace std;
int main()
{
    int n, remainder, reversenumber = 0, number;

    cout <<"Enter a number: ";
    cin >> n ;
    number = n;

    while(n != 0)
    {
        remainder = n % 10;
        reversenumber = reversenumber * 10 + remainder;
        n = n/10;
    }
    if(number == reversenumber)
    {
        cout <<"The entered number is Palindrome." << endl;
    }
    else{
        cout <<"The entered number is not a Palindrome." << endl;
    }
    return 0;
}
