// Program to creste marksheet mnagement system 

#include <iostream>
using namespace std;

int main()
{
    char name[50];
    float m1, m2, m3, total, per;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of Subject 1: ";
    cin >> m1;

    cout << "Enter Marks of Subject 2: ";
    cin >> m2;

    cout << "Enter Marks of Subject 3: ";
    cin >> m3;

    total = m1 + m2 + m3;
    per = total / 3;

    cout << "\nMarksheet" << endl;
    cout << "Name : " << name << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage : " << per << "%" << endl;
    return 0;
}