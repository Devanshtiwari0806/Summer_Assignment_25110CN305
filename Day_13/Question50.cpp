// Program to find sum and average of Array

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers[size];
    int sum = 0;

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
        sum = sum + numbers[i];
    }

    float average = (float)sum / size;

    cout << "Sum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average;
    
    return 0;
}