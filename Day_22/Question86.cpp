// Program to count words in a sentence

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count = 1;

    cout << "Enter a sentence: ";
    getline(cin, str);

    if (str.length() == 0)
    {
        count = 0;
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ' ')
            {
                count++;
            }
        }
    }
    cout << "Total words = " << count;

    return 0;
}