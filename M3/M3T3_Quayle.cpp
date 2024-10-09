#include <iostream>
#include <cstdlib>
#include <ctime>
// CSC 134
// M3T3 - Craps
// Susanna Quayle
// 9/25/2024

using namespace std;

int diceRoll()
{
    srand(time(0)); 
    int roll = 0; 
    roll= rand() % 6 + 1;
}

int main()
{
    int die1, die2, total, bet, winnings;
    string user_says;
    cout << "Welcome to the craps table! Are you ready to play the game?" << endl;
    cin >> user_says;
    cout << "How much are you betting?" << endl;
    cin >> bet;

    srand(time(0));

    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;

    cout << "Are you ready to roll your first die?" << endl;
    cin >> user_says;
    cout << "You rolled a " << die1 << "! Ready to go again?" << endl;
    cin >> user_says;
    cout << "Your second roll was a " << die2 << ". Ready to see your total and find out your winnings?" << endl;
    cin >> user_says;

    total = die1 + die2;
    cout << "You rolled "
         << die1 << " + "
         << die2 << " = " << total << endl;

    if (total == 7 || total == 11)
    {
        // winner
        winnings = bet * 2;
        cout << "Congratulations! You are the winner!" << endl;
        cout << "Your winnings are $" << winnings << endl;
    }
    else if (total == 2 || total == 3 || total == 12)
    {
        // loser
        cout << "Oh man, you lost!" << endl;
        cout << "Going home with nothing, better luck next time." << endl;
    }
    else
    {
        // points
        winnings = bet + total;
        cout << "You scored some points, nice!" << endl;
        cout << "Your winnings are $" << winnings << endl;
    }

    return 0;
}
