#include <iostream>
using namespace std;

// CSC 134
// M6LAB2 - vectors and arrays
// Susanna Quayle
// 12/6/2024

class Restaurant {
  private:
    string name;
    double rating;

  public:
  Restaurant(string n, double r)
  {
    name = n;
    rating = r;
  }
    void setName(string n) 
    {
        name = n; 
    }

    void setRating(double r) 
    {
        rating = r;
    }

    string getName() const 
    {
        return name;
    }

    double getRating() const 
    {
        return rating;
    }

    void printInfo()
    {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
  
};

int main() 
{
    cout << "\n========================" << endl;
    cout << "|  RESTAURANT REVIEWS  |" << endl;
    cout << "========================\n" << endl;

    Restaurant breakfast_place("MaryBill's Cafe", 4.5);
    cout << "\n+------------- BREAKFAST ------------+" << endl;
    breakfast_place.printInfo();

    Restaurant lunch_place("Miyabi Jr", 5);
    cout << "\n+--------------- LUNCH --------------+" << endl;
    lunch_place.printInfo();

    Restaurant dinner_place("Elizabeth's Pizza", 3.8);
    cout << "\n+-------------- DINNER --------------+" << endl;
    dinner_place.printInfo();

    cout << "\nThank you for checking out our reviews!\n";
    return 0;
}
