// Program to find nth Fibonacci term

#include<iostream>
using namespace std;

int main (){
    int n ;
    cout <<"Enter the value of nth term :";
    cin >> n;

    if(n == 0)
    {
        cout << "The 0th term is : 0" << endl;
        return 0;
    }
    if(n == 1)
    {
        cout <<"The 1st term is : 1" << endl;
        return 0;
    }
    int t1 = 0;
    int t2 = 1;
    int next_term = 0;

    for(int i = 2; i <= n; ++i)
    {
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
    }
    cout << "The " << n << "th fibonacci term is : " << t2 << endl;
    return 0;
}