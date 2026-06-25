//  Program to create library management system

#include <iostream>
using namespace std;

class Library
{
public:
    int bookId;
    string bookName;

    void getData()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Name: ";
        cin >> bookName;
    }

    void showData()
    {
        cout << "Book ID = " << bookId << endl;
        cout << "Book Name = " << bookName << endl;
    }
};

int main()
{
    Library b;

    b.getData();
    b.showData();

    return 0;
}