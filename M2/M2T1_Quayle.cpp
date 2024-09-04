#include <iostream>
#include <cmath>    // for floor
using namespace std;
// CSC 134
// M2T1 - Restaurant calculator
// Susanna Quayle
// 9/04/2024

int main() 
{
    // declare vars
    double meal_price = 5.99;
    double tax = 0.08;
    double tax_amt = meal_price * tax;
    double total = meal_price + tax_amt;

    // limit decimals
    tax_amt = floor(tax_amt * 100.0) / 100.0;
    total = floor(total * 100.0) / 100.0;

    // print receipt
    cout << "--- MAMMA MIA'S PIZZERIA ---" << endl;
    cout << "\nLUNCH\t$" << meal_price << endl;
    cout << "TAX\t$" << tax_amt << endl;
    cout << "--------------" << endl;
    cout << "\nTOTAL\t$" << total << endl;
}

/*
PSUEDO
define variables and assign value for meal price
calculate tax amount and total
round decimals
display info
*/