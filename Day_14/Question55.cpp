// Program to find the second largest element in an array

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    cout << "Second largest element is: " << second;

    return 0;
}