// Program to Binary Search

#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the number of elements (sorted array): ";
    cin >> n;

    int arr[n];

    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int start = 0, end = n - 1;
    int found = -1;

    while (start <= end) 
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key) 
        {
            found = mid;
            break;
        }
        else if (arr[mid] < key) 
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
    }

    if (found != -1)
        cout << "Element found at position " << found + 1;
    else
        cout << "Element not found in the array.";

    return 0;
}

