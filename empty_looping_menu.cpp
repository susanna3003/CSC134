#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cmath>
using namespace std;

// CSC 134
// M3HW1 - Gold/Bonus
// Susanna Quayle
// 9/30/2024

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
        cout << "Take your pick!" << endl;
        cout << "1. " << endl;
        cout << "2. " << endl;
        cout << "3. " << endl;
        cout << "4. " << endl;
        cout << "5. " << endl;
        cout << "> ";
        cin >> user_type;
    
        switch(user_type)
        {
            case 1:
            {
                // Q1
                // INPUT
                

                // PROCESS
                

                // OUTPUT

                break;
            }
            
            case 2:
            {
                // Q2
                // INPUT


                // PROCESS


                // OUTPUT


                break;
            }

            case 3:
            {
                // Q3
                // INPUT
                

                // PROCESS
                

                // OUTPUT


                break;
            }

            case 4:
            {
                // Q4
                // INPUT


                // PROCESS


                //OUTPUT


                break;
            }

            case 5:
            {
                continue_menu = false;
                cout << "Have a good day, bye!" << endl;
                break;
            }

            default:
            {
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }
}