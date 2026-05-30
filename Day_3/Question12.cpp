//Program to find LCM of two numbers

#include<iostream>
using namespace std;
int main ()
{
int number1, number2, maximum_value ;

cout <<"Enter two numbers : ";
cin >> number1 >> number2;

maximum_value = (number1 > number2) ? number1 :number2 ;

while(true)
{
    if(maximum_value % number1 == 0 && maximum_value % number2 == 0)
    {
        cout << "LCM of the numbers "<< number1 <<" and " << number2 <<" is : " << maximum_value << endl;
        break;
    }
    maximum_value++;
}
return 0;
}