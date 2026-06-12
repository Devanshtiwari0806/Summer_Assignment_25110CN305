// Program to remove duplicates from array

#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array after removing duplicate elements: ";

    for (int i = 0; i < n; i++) 
    {
        bool duplicate = false;

        for (int j = 0; j < i; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) 
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}