// Program to find first repeating character 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int count[256] = {0};
    char ans = '\0';

    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;

        if (count[str[i]] == 2)
        {
            ans = str[i];
            break;
        }
    }

    if (ans != '\0')
    {
        cout << "First repeating character is: " << ans;
    }
    else
    {
        cout << "No repeating character found.";
    }

    return 0;
}