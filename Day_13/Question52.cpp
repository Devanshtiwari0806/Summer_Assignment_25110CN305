// Program to count even and odd elements

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int numbers[size];
    int even_count = 0;
    int odd_count = 0;

    cout << "Enter the array elements: ";
    for (int index = 0; index < size; index++)
    {
        cin >> numbers[index];
    }

    for (int index = 0; index < size; index++)
    {
        if (numbers[index] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout << "Number of even elements = " << even_count << endl;
    cout << "Number of odd elements = " << odd_count;

    return 0;
}