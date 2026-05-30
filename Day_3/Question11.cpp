//Program to find GCD of two numbers

#include<iostream>
using namespace std;

    int findGCD(int a,int b){

        while(b != 0){
            int remainder = a % b;
            a = b;
            b = remainder;
        }
        return a;
    }
    
    int main()
    {
        int number1, number2;

        cout << "Enter two numbers : ";
        cin >> number1 >> number2;

        int result = findGCD(number1, number2);

        cout << "The GCD of " << number1 << "and " << number2 << "is : " << result << endl;
        
        return 0;
    }

