// Program to develop mini project using Arrays, Strings and Functions (Student Management)

#include <iostream>
#include <string>
using namespace std;

string name[10];
int roll[10];
int marks[10];
int n;

void addStudents()
{
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Name : ";
        cin >> name[i];

        cout << "Roll No : ";
        cin >> roll[i];

        cout << "Marks : ";
        cin >> marks[i];
    }
}

void showStudents()
{
    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nName : " << name[i] << endl;
        cout << "Roll No : " << roll[i] << endl;
        cout << "Marks : " << marks[i] << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n--Student Management--" << endl;
        cout << "1. Add Students" << endl;
        cout << "2. Show Students" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            addStudents();
        }
        else if (choice == 2)
        {
            showStudents();
        }
        else if (choice == 3)
        {
            cout << "Program Ended.";
        }
        else
        {
            cout << "Invalid Choice";
        }
    } while (choice != 3);
    return 0;
}