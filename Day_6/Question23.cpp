// Program to Count set bits in a number

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;

    int count = 0;

    while (number > 0) 
    {
        if (number % 2 == 1)
            count++;

        number /= 2;
    }

    cout << "Set bits in "<< number <<" is: " << count << endl;
    return 0;
}