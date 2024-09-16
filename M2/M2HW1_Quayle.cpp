#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cmath>
using namespace std;

// CSC 134
// M2HW1 - Gold/Bonus
// Susanna Quayle
// 9/11/2024

// functions for selection 2 - CRATE COMPANY
void calcForCustomer()
{
    // calculate crate cost for customer
    // this function declares vars for crate calculation
    // get dimensions from user, calculate individual crate cost, get total crate order, and calculate total cost
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;
    int length;
    int width;
    int height;
    int volume;
    int num_crates;
    double cost;
    double customer_price;
    double customer_total;
    // questions
    cout << "\nLet's get the crate dimensions." << endl;
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width? ";
    cin >> width;
    cout << "Lastly, what is the crate height? ";
    cin >> height;

    // TODO calculations for volume
    volume = (length * width) * height;
    cout << "Crate is: " << volume << " cubic feet." << endl;

    // TODO calculations for crate cost
    customer_price = volume * CHARGE_PER_CUBIC_FOOT;
    cout << "\nThe cost of one crate is $" << fixed << setprecision(2) << customer_price << endl;
    cout << "How many crates would you like to order? ";
    cin >> num_crates;

    customer_total = num_crates * customer_price;

    cout << "Your order of " << num_crates << " crates will cost $" << fixed << setprecision(2) << customer_total << endl;
}

void calcForManufacture()
{
    // calculate crate cost for manufacturer
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;
    int length;
    int width;
    int height;
    int volume;
    double cost;
    double manufacture_price;
    double profit;
    int num_crates;
    double total_cost;
    // questions
    cout << "\nLet's get the crate dimensions." << endl;
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width? ";
    cin >> width;
    cout << "Lastly, what is the crate height? ";
    cin >> height;

    // TODO calculations for volume
    volume = (length * width) * height;
    cout << "Crate is: " << volume << " cubic feet." << endl;

    // TODO calculations for crate cost
    cost = volume * COST_PER_CUBIC_FOOT;
    cout << "\nThe cost of one crate is $" << fixed << setprecision(2) << cost << endl;
    cout << "How many crates would you like to order? ";
    cin >> num_crates;

    total_cost = num_crates * cost;

    cout << "\nCost is $" << total_cost << " for an order of " << num_crates << " crates." << endl;
}

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
            {
                // Q1
                // simulate banking transactions
                // INPUT user name, starting acc balance, deposit amt, withdrawal amt
                string user_name;
                int acc_number;
                double starting_balance;
                double deposit_amt;
                double withdrawal_amt;
                double remaining_balance;

                cout << "\nClient username: ";
                cin >> user_name;
                cout << "Starting balance: $";
                cin >> starting_balance;
                cout << "Deposit amount: $";
                cin >> deposit_amt;
                cout << "Withdrawal amount: $";
                cin >> withdrawal_amt;

                // PROCESS generate acc number somehow, do deposit and withdrawal calculations
                acc_number = rand();
                remaining_balance = starting_balance + deposit_amt;
                remaining_balance -= withdrawal_amt;
                remaining_balance = floor(remaining_balance * 100.0) / 100.0;

                // OUTPUT name on account, account number, final balance
                cout << "\nClient: " << user_name << endl;
                cout << "Account number: " << acc_number << endl;
                cout << "Final balance: $" << remaining_balance << endl;
                cout << "Thank you for banking with us!" << endl;
                break;
            }
            
            case 2:
            {
                // Q2
                // general crates as base
                // set up variables
                // updated cost per cubic foot is 0.3
                // charge per cubic foot cannot be raised about 0.52
                // modify current crates program to match these changes
                string name;
                int user_type;
                bool continue_menu = true;
                const double COST_PER_CUBIC_FOOT = 0.3;
                const double CHARGE_PER_CUBIC_FOOT = 0.52;

                while (continue_menu)
                {
                    // greeting
                    cout << "\n--- GENERAL CRATES ---" << endl;
                    cout << "\tWelcome!" << endl;
                    cout << "1. Customer services" << endl;
                    cout << "2. Manufacturing services" << endl;
                    cout << "3. Exit" << endl;
                    cout << "> ";
                    cin >> user_type;
                
                    switch(user_type)
                    {
                        case 1:
                            int customer_menu_select;
                            cout << "\nWelcome to Customer services. \nHere you may \n1. view crate cost per cubic foot\n2. order crates\n> ";
                            cin >> customer_menu_select;
                            if (customer_menu_select == 1)
                            {
                                cout << "Cost per cubic foot is $" << CHARGE_PER_CUBIC_FOOT << endl;
                            }
                            else if (customer_menu_select == 2)
                            {
                                calcForCustomer();
                            }
                            else
                            {
                                cout << "Invalid choice." << endl;
                            }
                            break;
                        
                        case 2:
                            int manufacture_menu_select;
                            cout << "\nWelcome to Manufacture services. \nHere you may \n1. view crate cost per cubic foot\n2. order crates\n> ";
                            cin >> manufacture_menu_select;
                            if (manufacture_menu_select == 1)
                            {
                                cout << "Cost per cubic foot is $" << COST_PER_CUBIC_FOOT << endl;
                            }
                            else if (manufacture_menu_select == 2)
                            {
                                calcForManufacture();
                            }
                            else
                            {
                                cout << "Invalid choice." << endl;
                            }
                            break;

                        case 3:
                        continue_menu = false;
                            cout << "Have a great day, bye!" << endl;
                            break;

                        default:
                            cout << "Invalid choice." << endl;
                            break;
                    }
                }
                
                break;
            }

            case 3:
            {
                // Q3
                // pizza party
                // INPUT how many pizzas are ordered, how many slices per pizza, and how many visitors
                int num_pizzas;
                int slices_per;
                int num_guests;
                int serving_size = 3;
                int total_slices;
                int leftover_slices;

                cout << "\nHow many pizzas? ";
                cin >> num_pizzas;
                cout << "How many slices per pizza? ";
                cin >> slices_per;
                cout << "How many guests? ";
                cin >> num_guests;

                // PROCESS calculate num slices left over
                total_slices = slices_per * num_pizzas;
                leftover_slices = total_slices - (num_guests * serving_size);
                
                // OUTPUT display leftover amount of slices
                if (leftover_slices > 0)
                {
                    cout << "After your party with " << num_pizzas << " pizzas, " << slices_per << " slices each, and " << num_guests << " guests, there are " << leftover_slices << " slices of pizza leftover." << endl;
                }
                else
                {
                    cout << "No leftover slices :(" << endl;
                }

                break;
            }

            case 4:
            {
                // Q4
                // cheers!
                // use vars string letsGo, school, team, cheerOne, cheerTwo
                string lets_go = "Let's go";
                string school = "FTCC";
                string team = "Trojans";
                string cheer_one, cheer_two;

                // display cheer
                cheer_one = lets_go + " " + school;
                cheer_two = lets_go + " " + team;

                for (int i=0; i < 3; i++)
                {
                    cout << cheer_one << endl;
                }
                cout << cheer_two << endl;

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