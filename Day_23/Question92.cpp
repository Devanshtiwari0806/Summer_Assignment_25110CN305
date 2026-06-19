// Program to find maximum occuring character

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

    char maxChar;
    int maxCount = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (count[str[i]] > maxCount)
        {
            maxCount = count[str[i]];
            maxChar = str[i];
        }
    }

    cout << "Maximum occurring character is: " << maxChar << endl;
    cout << "Frequency = " << maxCount;

    return 0;
}