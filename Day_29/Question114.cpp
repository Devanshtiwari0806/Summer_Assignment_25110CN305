// Program to menu-driven array operation system 

#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, choice, sum = 0;

    cout << "Enter Size: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "1. Display Array\n";
    cout << "2. Find Sum\n";

    cin >> choice;

    if (choice == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else if (choice == 2)
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }

        cout << "Sum = " << sum;
    }

    return 0;
}