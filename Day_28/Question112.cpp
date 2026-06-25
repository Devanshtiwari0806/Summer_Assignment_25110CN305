// Program to create contact management system

#include <iostream>
using namespace std;

class Contact
{
public:
    string name;
    string phone;

    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Phone Number: ";
        cin >> phone;
    }

    void showData()
    {
        cout << "Name = " << name << endl;
        cout << "Phone = " << phone << endl;
    }
};

int main()
{
    Contact c;

    c.getData();
    c.showData();

    return 0;
}