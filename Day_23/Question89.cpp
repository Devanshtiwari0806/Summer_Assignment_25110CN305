// Program to find first non-repeating character

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int count[256] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    bool found = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] == 1)
        {
            cout << "First non-repeating character is: " << str[i];
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "No non-repeating character found.";
    }

    return 0;
}