#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

// CSC 134
// M2HW1 - Gold/Bonus
// Susanna Quayle
// 9/11/2024

int main()
{
    // set up variables
    string name;
    int user_type;
    bool continue_menu = true;

    cout << "\nHello user, what is your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;

    while (continue_menu)
    {
        // greeting
        cout << "\n--- WELCOME ---" << endl;
        cout << "\tTake your pick!" << endl;
        cout << "1. Banking" << endl;
        cout << "2. General Crates" << endl;
        cout << "3. Pizza Party" << endl;
        cout << "4. Cheers!" << endl;
        cout << "5. Exit" << endl;
        cout << "> ";
        cin >> user_type;
    
        switch(user_type)
        {
            case 1:
                // Q1
                // simulate banking transactions
                // INPUT user name, starting acc balance, deposit amt, withdrawal amt
                // PROCESS generate acc number somehow, do deposit and withdrawal calculations
                // OUTPUT name on account, account number, final balance
                break;
            
            case 2:
                // Q2
                // general crates as base
                // updated cost per cubic foot is 0.3
                // charge per cubic foot cannot be raised about 0.52
                // modify current crates program to match these changes
                break;

            case 3:
                // Q3
                // pizza party
                // INPUT how many pizzas are ordered, how many slices per pizza, and how many visitors
                // PROCESS calculate num slices left over
                // OUTPUT display leftover amount of slices
                break;

            case 4:
                // Q4
                // cheers!
                // use vars string letsGo, school, team, cheerOne, cheerTwo
                // display cheer
                string letsGo = "Let's go";
                string school = "FTCC";
                string team = "Trojans";
                string cheerOne, cheerTwo;
                break;

            case 5:
                continue_menu = false;
                cout << "Have a good day, bye!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }
}