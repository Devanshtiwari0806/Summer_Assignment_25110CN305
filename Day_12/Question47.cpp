// Program to write function for Fibonacci series

#include <iostream>
using namespace std;

void fibonacci(int number_of_terms)
{
    int first = 0;
    int second = 1;

    for (int i = 1; i <= number_of_terms; i++)
    {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }
}

int main()
{
    int number_of_terms;

    cout << "Enter number of terms : ";
    cin >> number_of_terms;

    fibonacci(number_of_terms);

    return 0;
}