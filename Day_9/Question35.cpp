// Program to print Repeated character pattern

#include<iostream>
using namespace std;

int main ()
{
   int rows;

   cout << "Enter the number of rows : ";
   cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        char character = 'A' + i - 1;

        for(int j = 1; j <= i; j++)
        {
            cout << character;
        }
        cout << endl;
    }
    return 0 ;
}