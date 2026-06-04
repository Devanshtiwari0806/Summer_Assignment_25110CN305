// Program to print character triangle 

#include <iostream>
using namespace std;

int main()
{
    int Rows = 5;

    for (int i = 1; i <= Rows; i++)
    {
        for (char Character = 'A'; Character < 'A' + i; Character++)
        {
            cout << Character;
        }

        cout << endl;
    }

    return 0;
}