// Program to create quiz application

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char ans;

    cout << "Q1. Name the capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\n";
    cin >> ans;
    if (ans == 'b' || ans == 'B')
    {
        score++;
    }

    cout << "\nQ2. How many days are there in a year?\n";
    cout << "a) 455\nb) 376\nc) 365\n";
    cin >> ans;

    if (ans == 'c' || ans == 'C')
    {
        score++;
    }

    cout << "\nQ3. Which planet is known as the evening star?\n";
    cout << "a) Mars\nb) Venus\nc) Jupiter\n";
    cin >> ans;

    if (ans == 'b' || ans == 'B')
    {
        score++;
    }
    cout << "\nYour Score = " << score << " out of 3";
    return 0;
}
