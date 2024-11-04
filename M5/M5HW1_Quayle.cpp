#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cmath>
using namespace std;

// CSC 134
// M3HW1 - Gold/Bonus
// Susanna Quayle
// 11/4/2024

// declare funcs
void avg_rainfall();
void calc_hyperrectangle();
void get_roman_num();


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
        cout << "1. Avg Rainfall" << endl;
        cout << "2. 3D Hyperrectangle" << endl;
        cout << "3. Roman Numeral" << endl;
        cout << "4. Geometry Calc" << endl;
        cout << "5. Distance Traveled" << endl;
        cout << "6. Exit" << endl;
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

                break;
            }

            case 6:
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