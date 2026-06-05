// Program to print Reverse star pattern

#include<iostream>
using namespace std;

int main ()
{
    int number_of_rows;

    cout <<"Enter number of rows : ";
    cin >> number_of_rows;

    for(int row = number_of_rows; row >= 1; row--)
    {
        for(int column = 1; column <= row; column++)
        {
            cout << "* ";
        }
        cout << endl ;
    }
    return 0 ;
}
