#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout <<"Enter a positive integer: ";
    cin >> n;

    cout <<"The multiplication table of the given integer is:" << endl;

    for(int i = 1; i <= 10; ++i)
    {
    cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}