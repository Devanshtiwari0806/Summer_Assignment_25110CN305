// Program to create student record system using arrays and strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[10];
    int roll[10];
    int marks[10];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Name : ";
        cin >> name[i];

        cout << "Roll No : ";
        cin >> roll[i];

        cout << "Marks : ";
        cin >> marks[i];
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nName : " << name[i] << endl;
        cout << "Roll No : " << roll[i] << endl;
        cout << "Marks : " << marks[i] << endl;
    }
    return 0;
}