// Program to find largest and smallest element

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int numbers[size];

    cout << "Enter the array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    int largest = numbers[0];
    int smallest = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }

        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }
    cout << "Largest element of Array = " << largest << endl;
    cout << "Smallest element of Array = " << smallest ;

    return 0;
}