#include <iostream>
#include <iomanip>
using namespace std;

// CSC 134
// M2LAB1 - calc cube volume
// Susanna Quayle
// 9/9/2024

// crate company selling crates must calculate size of crate, cost of production and customer cost
void calcForCustomer()
{
    // calculate crate cost for customer
}

void calcForManufacture()
{
    // calculate crate cost for manufacturer
}

int main()
{
    // set up variables
    string name;
    int user_type;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    int length;
    int width;
    int height;
    int volume;
    double cost;
    double customer_price;
    double profit;
    int num_crates;
    double total_cost;
    double customer_total;


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

    if (user_type == 1)
    {
        int customer_menu_select;
        cout << "Welcome to Customer services. \nHere you may \n1. view crate cost per cubic foot\n2. full crate cost\n3. order crates.\n> ";
        cin >> customer_menu_select;
    }
    else if (user_type == 2)
    {
        int manufacture_menu_select;
        cout << "Welcome to Manufacture services. \nHere you may \n1. view crate cost per cubic foot\n2. full crate cost\n3. order crates.\n> ";
        cin >> manufacture_menu_select;
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

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
    customer_price = volume * CHARGE_PER_CUBIC_FOOT;
    cout << "\nThe cost of one crate is $" << fixed << setprecision(2) << customer_price << endl;
    cout << "How many crates would you like to order? ";
    cin >> num_crates;

    customer_total = num_crates * customer_price;
    total_cost = num_crates * cost;
    profit = customer_total - total_cost;

    cout << "Your order of " << num_crates << " crates will cost $" << fixed << setprecision(2) << customer_total << endl;

    cout << "\nManufacturing cost is $" << total_cost << " for an order of " << num_crates << " crates." << endl;
    cout << "Company profit is $" << profit << endl;
}
