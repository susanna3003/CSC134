#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cmath>
using namespace std;

// CSC 134
// HALLOWEEN++ (it's past halloween)
// Susanna Quayle
// 11/6/24

void rookie_start();
void driver_start();
void drive_for_williams();
void drive_for_aston_martin();
int soft_quali_williams();
int med_quali_williams();
int hard_quali_williams();
int soft_quali_am();
int med_quali_am();
int hard_quali_am();

int main()
{
    // set up variables
    string name;
    int user_type;
    bool continue_menu = true;

    cout << "\nHello user, what is your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;

    cout << "\t\tWelcome to\t\t" << endl;
    cout << "   _____  ____    ____   __  __   _   _  _        _      __" << endl;
    cout << "  |  ___||  _  \\ |  _ \\ |  \\/  | | | | || |      / \\    |  |" << endl;
    cout << "  | |__  | | | | | |_) || \\  / | | | | || |     / _ \\   |  |" << endl;
    cout << "  |  __| | |_| | |  _ < | |\\/| | | | | || |___ / ___ \\  |  |" << endl;
    cout << "  |_|     \\___/  |_| \\_\\|_|  |_| \\_____/\\_____/_/   \\_\\ |__|" << endl;

}

void drive_for_williams()
{
    int convo_go;
    cout << "Congratulations on signing to team Williams!" << endl;
    cout << "Team principal James Vowles welcomes you proudly and enthusiastically with a gripping hand shake." << endl;
    cout << "'An American eh? You'll be a great fit for the team! Given you can perform better than Sargent...'" << endl;
    cout << "[1. Ask about Sargent] [2. Brush past the comment and go meet the rest of the team.]";
    //cin >> convo_go;

    while (!(cin >> convo_go)) 
    {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (convo_go == 1)
    {
        cout << "Upon inquiry you learn of your predecessor Logan Sargent, one of the only other American racers to join the grid." << endl;
        cout << "'He was a nice kid and a good racer... but not good enough.' is all Vowles has to share before he takes you off to meet the rest of the team." << endl;
    }
    else if (convo_go == 2)
    {
        cout << "Brushing past that comment, you join Vowles in the Williams garage to meet the team of mechanics and engineers who will be supporting you, and your car, through the season." << endl;
        cout << "'These are not the people to get on your bad side' Vowles quips, clapping your shoulder. 'They make the car go.. you just steer.'" << endl;
    }
}

void drive_for_aston_martin()
{

}

int soft_quali_williams()
{

}

int med_quali_williams()
{

}

int hard_quali_williams()
{

}

int soft_quali_am()
{

}

int med_quali_am()
{

}

int hard_quali_am()
{

}