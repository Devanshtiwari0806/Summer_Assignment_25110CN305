// Program to perform Linear Search 

#include<iostream>
using namespace std ;
 
int main ()
{
    int size, key, found = 0;

    cout << "Enter the size of array : ";
    cin >> size;

    int array[size];

    cout << "Enter the array elements : ";

    for(int i = 0; i < size; i++)
    {
    cin >> array[i];
    }
    cout << "Enter the element to search : ";
    cin >> key;

    for(int i = 0; i < size; i++)
    {
        if(array[i] == key)
        {
            cout << "The ELement is found at the position " << i + 1;
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        cout << "The element entered is not found in the array.";
    }
    return 0;
}
