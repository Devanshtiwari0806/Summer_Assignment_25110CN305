// Program to find duplicate elements in an Array

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

    cout << "Duplicate elements are: ";

    for (int i = 0; i < size; i++)
    {
        bool duplicate = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                duplicate = true;
                break;
            }
        }
        if (duplicate)
        {
            continue;
        }
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }
    return 0;
}