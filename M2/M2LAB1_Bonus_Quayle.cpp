#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

// CSC 134
// M2LAB1 - calc cube volume
// Susanna Quayle
// 9/9/2024

// crate company selling crates must calculate size of crate, cost of production and customer cost
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

int backToMenu()
{
    string name;
    int user_type;
    // greeting
    cout << "Hello user, what is your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    cout << "\n--- CRATE COMPANY ---" << endl;
    cout << "\tWelcome!" << endl;
    cout << "1. Customer services" << endl;
    cout << "2. Manufacturing services" << endl;
    cout << "> ";
    cin >> user_type;
    return user_type;
}

int main()
{
    // set up variables
    string name;
    int user_type;
    char menu_again;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;

    user_type = backToMenu();

    if (user_type == 1)
    {
        int customer_menu_select;
        cout << "Welcome to Customer services. \nHere you may \n1. view crate cost per cubic foot\n2. order crates\n> ";
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
    }
    else if (user_type == 2)
    {
        int manufacture_menu_select;
        cout << "Welcome to Manufacture services. \nHere you may \n1. view crate cost per cubic foot\n2. order crates\n> ";
        cin >> manufacture_menu_select;
        if (manufacture_menu_select == 1)
        {
            cout << "Cost per cubic foot is $" << CHARGE_PER_CUBIC_FOOT << endl;
        }
        else if (manufacture_menu_select == 2)
        {
            calcForManufacture();
        }
        else
        {
            cout << "Invalid choice." << endl;
        }
    }
    else
    {
        cout << "Invalid choice." << endl;
    }
}