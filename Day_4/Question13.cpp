// Program to generate Fibonacci series

#include<iostream>
using namespace std;
int main (){
    int n;
    unsigned long long t1 = 0, t2 = 1, next_term = 0;

    cout <<"Enter number of terms(should positive and non-zero): ";
    cin >> n;

    cout <<"Fibonacci number :";

    for(int i=1; i <= n; ++i)
    {
        if(i==1){
            cout << t1;
            if(n>1) cout << ", ";
            continue;
        }

        if(i==2){
            cout << t2;
            if(n>2) cout << ", ";
            continue;
        }
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;

        cout << next_term;
        if(i<n) cout << ", ";
    }
    cout << endl;
    return 0;
}