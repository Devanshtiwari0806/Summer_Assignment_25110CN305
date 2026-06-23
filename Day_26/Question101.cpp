// Program to  create number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100: ";
    do
    {
        cin >> guess;

        if (guess > num)
        {
            cout << "Too High! Guess Again: ";
        }
        else if (guess < num)
        {
            cout << "Too Low! Guess Again: ";
        }
        else
        {
            cout << "Congratulations! You guessed correctly.";
        }
    } 
    while (guess != num);
    return 0;
}