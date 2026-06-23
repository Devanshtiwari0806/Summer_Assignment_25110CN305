// Program to create salary management system 

#include <iostream>
using namespace std;

int main()
{
    float basic, hra, da, total;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;

    total = basic + hra + da;

    cout << "\nSalary Details" << endl;
    cout << "Basic Salary : " << basic << endl;
    cout << "HRA : " << hra << endl;
    cout << "DA : " << da << endl;
    cout << "Total Salary : " << total << endl;
    return 0;
}