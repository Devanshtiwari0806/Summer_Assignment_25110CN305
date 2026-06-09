// Program to input and display Array

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of array : " ;
    cin >> size ;

    int numbers[size] ;

    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    cout << "Array elements are: " ;
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " " ;
    }
    return 0;
}