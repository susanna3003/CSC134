#include <iostream>
#include <cstdlib>
#include <ctime>
// CSC 134
// M4LAB2 - Craps Continued
// Susanna Quayle
// 9/25/2024

using namespace std;

int diceRoll()
{
    int roll = 0; 
    roll = (rand() % 6) + 1;
    return roll;
}

int main()
{
    int die1, die2, total, bet, winnings;
    string user_says;
    bool continue_craps = true;
    cout << "Welcome to the craps table! Are you ready to play the game? (enter any char)" << endl;
    cin >> user_says;

    while (continue_craps == true)
    {
        cout << "How much are you betting?" << endl;
        cin >> bet;

        srand(time(0)); 

        die1 = diceRoll();
        die2 = diceRoll();

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
            continue_craps = false;
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
            int point = total;
            bool continue_points = true;
            cout << "Your point is " << point << ", now you have to keep rolling until you roll that or a 7. Good luck!" << endl;
            
            while (continue_points == true)
            {
                srand(time(0)); 
                die1 = diceRoll();
                die2 = diceRoll();

                cout << "Are you ready to roll your first die?" << endl;
                cin >> user_says;
                cout << "You rolled a " << die1 << "! Ready to go again?" << endl;
                cin >> user_says;
                cout << "Your second roll was a " << die2 << ". Ready to see your total?" << endl;
                cin >> user_says;

                total = die1 + die2;
                cout << "You rolled "
                    << die1 << " + "
                    << die2 << " = " << total << endl;

                if (total == point)
                {
                    winnings = bet + (point * 10);
                    cout << "You rolled your point, congratulations!" << endl;
                    cout << "Your winnings are " << winnings << "!" << endl;
                    continue_points = false;
                    continue_craps = false;
                }
                else if (total == 7)
                {
                    winnings = bet * 2;
                    cout << "You rolled a 7, congratulations!" << endl;
                    cout << "Your winnings are " << winnings << "!" << endl;
                    continue_points = false;
                    continue_craps = false;
                }
                else 
                {
                    cout << "Aw man, gotta keep on rolling!" << endl;
                }
            }
        }
    }
}