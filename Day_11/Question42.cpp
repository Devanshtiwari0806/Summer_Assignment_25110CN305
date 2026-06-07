// Program to find greatest of two numbers

#include<iostream>
using namespace std;

int maximum(int number1,int number2)
{
    if(number1 > number2)
    {
        return number1;
    }
    else{
        return number2;
    }
}

int main ()
{
    int number1, number2;

    cout << "Enter two numbers : ";
    cin >> number1 >> number2;

    cout << "Maximum number = " << maximum(number1, number2) ;

    return 0;
}
