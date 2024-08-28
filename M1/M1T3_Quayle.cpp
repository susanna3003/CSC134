#include <iostream>
using namespace std;

// CSC 134
// M1LAB - apple orchard
// Susanna Quayle
// 8/19/2024

int main() { 
  // owner name
  string name = "Jane Smith";
  // num apples
  int num_apples = 100;
  int user_num_apples = 0;
  // price per apple
  double price_per_apple = 0.25;

  // calculate apple price 
  //TODO
  double total_price = num_apples * price_per_apple;

  // print orchard info
  //TODO
  cout << "Welcome to " << name;
  cout << "'s orchard.\n" << endl;

  cout << "We have " << num_apples;
  cout << " apples in stock.\n" << endl;

  cout << "Apples are currently $" << price_per_apple;
  cout << " each.\n" << endl;

  cout << "Cost of all apples is $" << total_price << endl;

  cout << "\nHow many apples would you like? ";
  cin >> user_num_apples;

  double user_total = user_num_apples * price_per_apple;

  cout << "\nYour total is $" << user_total;
  cout << " for " << user_num_apples;
  cout << " apples." << endl;
    }