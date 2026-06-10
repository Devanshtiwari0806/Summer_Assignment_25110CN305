//Program to find the Frequency of an element

#include <iostream>
using namespace std;

int main()
{
    int size, number, count = 0;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element whose frequency you want to find: ";
    cin >> number;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
        {
            count++;
        }
    }
    cout << "Frequency of " << number << " is " << count;
    return 0;
}