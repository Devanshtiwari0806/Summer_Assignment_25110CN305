// Program to find common characters in string


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    cout << "Common Characters: ";

    for ( int i = 0; i < s1.length(); i++ )
    {
        bool found = false;

        for ( int j = 0; j < s2.length(); j++ )
        {
            if ( s1[i] == s2[j] )
            {
                found = true;
                break;
            }
        }

        if ( found )
        {
            bool printed = false;

            for ( int k = 0; k < i; k++ )
            {
                if ( s1[k] == s1[i] )
                {
                    printed = true;
                    break;
                }
            }

            if ( !printed )
            {
                cout << s1[i] << " ";
            }
        }
    }

    return 0;
}