// Program to create ticket booking system

#include <iostream>
using namespace std;

class Ticket
{
public:
    string name;
    int seats;

    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Seats: ";
        cin >> seats;
    }

    void showData()
    {
        cout << "Name = " << name << endl;
        cout << "Seats Booked = " << seats << endl;
    }
};

int main()
{
    Ticket t;

    t.getData();
    t.showData();

    return 0;
}