// Program to remove spaces from string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            result = result + str[i];
        }
    }
    cout << "String after removing spaces: " << result;

    return 0;
}