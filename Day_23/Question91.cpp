// Program to check anagram strings

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length())
    {
        cout << "Strings are not anagrams.";
        return 0;
    }

    int count[256] = {0};

    for (int i = 0; i < str1.length(); i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    bool isAnagram = true;

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
    {
        cout << "Strings are anagrams.";
    }
    else
    {
        cout << "Strings are not anagrams.";
    }

    return 0;
}