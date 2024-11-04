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
void calc_hyperrectangle(double width, double length, double height);
void get_roman_num();
double area_circle();
double area_rectangle();
double area_triangle();
void distance_traveled(double speed, double hours);

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
                // avg rainfall
                // this is where we'll calculate average rainfall
                string month1, month2, month3;
                double rfall1, rfall2, rfall3, avg;
                cout << "Enter month: ";
                

                break;
            }
            
            case 2:
            {
                // 3d hyperrectangle
                cout << "Calculate a 3DD Hyperrectangle (i.e. just a cube)" << endl;
                double width, length, height, volume;
                cout << "Enter width: ";
                cin >> width;
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter height: ";
                cin >> height;
                volume = calc_hyperrectangle(width, length, height);
                break;
            }

            case 3:
            {
                // roman numeral
                int digit;
                cout << "Get a roman numeral" << endl;
                cout << "Enter a number (1-10): ";
                cin >> digit;
                get_roman_num(digit);
                break;
            }

            case 4:
            {
                // Geometry Calculator
                cout << "Welcome to the Geometry Calculator!" << endl;
                cout << "1. Calculate the Area of a Circle" << endl;
                cout << "2. Calculate the Area of a Rectangle" << endl;
                cout << "3. Calculate the Area of a Triangle" << endl;
                cout << "4. Quit" << endl;
                cout << "Enter your choice (1-4): ";
                break;
            }

            case 5:
            {
                // distance traveled
                double speed, hours;
                bool speed_positive = true;
                bool plus_one_hours = true;
                while (speed_positive == true)
                {
                    cout << "What is the speed you are traveling at? (in mph) ";
                    cin >> speed;
                    if (speed > 0)
                    {
                        speed_positive = true;
                    }
                    else if (speed <= 0)
                    {
                        speed_positive = false;
                    }
                }
                while (plus_one_hours == true)
                {
                    cout << "How many hours are you traveling? ";
                    cin >> hours;
                    if (speed > 1)
                    {
                        plus_one_hours = true;
                    }
                    else if (speed <= 1)
                    {
                        plus_one_hours = false;
                    }
                }
                distance_traveled();
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

void get_roman_num(digit)
{
    switch(digit)
    {
            case 1:
            {
                cout << "The Roman numeral version of " << digit << " is I" << endl;
                break;
            }
            
            case 2:
            {
                cout << "The Roman numeral version of " << digit << " is II" << endl;
                break;
            }

            case 3:
            {
                cout << "The Roman numeral version of " << digit << " is III" << endl;
                break;
            }

            case 4:
            {
                cout << "The Roman numeral version of " << digit << " is IV" << endl;
                break;
            }

            case 5:
            {
                cout << "The Roman numeral version of " << digit << " is V" << endl;
                break;
            }

            case 6:
            {
                cout << "The Roman numeral version of " << digit << " is VI" << endl;
                break;
            }

            case 7:
            {
                cout << "The Roman numeral version of " << digit << " is VII" << endl;
                break;
            }
            
            case 8:
            {
                cout << "The Roman numeral version of " << digit << " is VIII" << endl;
                break;
            }

            case 9:
            {
                cout << "The Roman numeral version of " << digit << " is IX" << endl;
                break;
            }

            case 10:
            {
                cout << "The Roman numeral version of " << digit << " is X" << endl;
                break;
            }
        
    }
}

void calc_hyperrectangle(double width, double length, double height)
{
    double volume = width * length * height;
    return volume;
}

double area_circle() {
    
}

double area_rectangle() {

}

double area_triangle() {

}

void distance_traveled(double speed, double hours)
{
    cout << "Hour\tDistance Traveled" << endl;
    cout << "------------------------" << endl;
    for (int i = 1; i < hours; i++)
    {
        double distance = speed * hours;
        cout << i << "\t" << distance << endl;
    }
}