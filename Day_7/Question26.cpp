// Program to find Recursive Fibonacci

#include<iostream>
using namespace std;

int fibonacci(int term)
{
    if(term == 0)
    {
        return 0;
    }
    if(term == 1)
    {
        return 1;
    }
    return fibonacci(term - 1) + fibonacci(term - 2);
}

int main()
{
    int number_Of_Terms;

    cout << "Enter number of terms: ";
    cin >> number_Of_Terms;

    for(int i = 0; i < number_Of_Terms; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}