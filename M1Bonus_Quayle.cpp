#include <iostream>
#include <cmath>
using namespace std;
/*
1. Given a rectangle with height 8 and width 10, calculate and print the area. 
2. Assume a product is sold for $99.99, and sales tax is 8%. Display the product price, the amount of sales tax, and then the final cost including sales tax. (For handling monetary values, and percentages, you will want to use the double type. "Percent" is "per cent", meaning a 8% sales tax in numerical terms is 0.08 )
3. Assume a pizza is 12 inches in diameter. Using the standard formula, calculate and display the area of that pizza. (You'll need to determine what common geometrical shape best fits a pizza, then look up the formula for area for that shape.)
4. If the pizza from question 3 is cut into 8 pieces, what is the area of each piece?
  */

// define funcs
// here is the rectangle calculation
void calcRectangle() 
{
  // initialize variables
  int rec_height = 0;
  int rec_width = 0;
  // get height and width from user
  cout << "\n--- RECTANGLE CALCULATOR ---";
  cout << "\nEnter rectangle height: ";
  cin >> rec_height;
  cout << "Enter rectangle width: ";
  cin >> rec_width;
  // calc area
  int rec_area = rec_height * rec_width;
  // display area
  cout << "The area of the rectangle is " << rec_area << endl;
}

// here is product tax calc
void productSale() 
{
  // initialize variables
  double product = 99.99;
  double sales_tax = 0.08;
  double final_cost = 0.00;
  // calc tax and final cost
  double tax_amt = product * sales_tax;
  final_cost = product + tax_amt;
  // limit decimals
  tax_amt = floor(tax_amt * 100.0) / 100.0;
  final_cost = floor(final_cost * 100.0) / 100.0;
  // display info
  cout << "\n--- PRODUCT SALE ---" << endl;
  cout << "Product price: $" << product << endl;
  cout << "Sales tax: $" << tax_amt << endl;
  cout << "Final cost: $" << final_cost << "\n" << endl;
}

// pizza calc
void pizzaCalc() 
{
  // initialize variables
  int diameter = 12;
  int radius = diameter / 2;
  double pi = 3.141592653589793;
  // calc pizza area
  double pizza_area = pi * (radius*radius);
  pizza_area = floor(pizza_area * 100.00) / 100.0;
  //display
  cout << "\n--- PIZZA AREA ---" << endl;
  cout << "Pizza size: " << diameter << " inches" << endl;
  cout << "Pizza area: " << pizza_area << " square inches" << endl;
}

// pizza slice calc
void pizzaSliceCalc() 
{
  // initialize vars
  double pizza_area = 113.09;
  double slice_area = pizza_area / 8;
  slice_area = floor(slice_area * 100.00) / 100.0;
  // get num slices from user
  cout << "\n--- PIZZA SLICE AREA ---" << endl;
  cout << "Pizza size: 12 inches" << endl;
  cout << "Number of slices: 8 slices" << endl;
  cout << "Area of each slice: " << slice_area << " square inches" << endl;
  // calc slice area
  
}

int menuFunc() 
{
  int user_choice = 0;
  cout << "--- BONUS ---" << endl;
  cout << "1. Rectangle Calculator" << endl;
  cout << "2. Product Sale" << endl;
  cout << "3. Pizza Area Calculator" << endl;
  cout << "4. Pizza Slice Area Calculator" << endl;
  cout << "5. Exit" << endl;
  cout << "Enter menu selection: ";
  cin >> user_choice;
  return user_choice;
}

int main() 
{
  //TODO - I would like to create a menu giving options for each of the bonus programs and let user choose
  int user_choice = menuFunc();
  
  switch(user_choice) 
  {
    case 1:
    // call rectangle calc
      calcRectangle();
      break;
    case 2:
      // call product sale
      productSale();
      break;
    case 3:
      // call pizza calc
      pizzaCalc();
      break;
    case 4:
      pizzaSliceCalc();
      break;
    case 5:
      cout << "\nBye!" << endl;
      break;
    default:
      cout << "\nInvalid selection, try again." << endl;
  }
}