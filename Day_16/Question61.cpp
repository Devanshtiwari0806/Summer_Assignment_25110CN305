// Program to find missing number in array

#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    int array[n - 1];
    cout << "Enter " << n - 1 << " elements: ";

    for (int i = 0; i < n - 1; i++) 
    {
        cin >> array[i];
    }

    int totalSum = n * (n + 1) / 2;
    int array_Sum = 0;

    for (int i = 0; i < n - 1; i++) 
    {
        array_Sum = array_Sum + array[i];
    }

    int missing = totalSum - array_Sum;

    cout << "Missing number is: " << missing << endl;

    return 0;
}