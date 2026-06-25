// Program to create inventory management system

#include <iostream>
using namespace std;

class Item
{
public:
    int id;
    string name;
    int qty;

    void getData()
    {
        cout << "Enter Item ID: ";
        cin >> id;

        cout << "Enter Item Name: ";
        cin >> name;

        cout << "Enter Quantity: ";
        cin >> qty;
    }

    void showData()
    {
        cout << "Item ID = " << id << endl;
        cout << "Item Name = " << name << endl;
        cout << "Quantity = " << qty << endl;
    }
};

int main()
{
    Item i;

    i.getData();
    i.showData();

    return 0;
}