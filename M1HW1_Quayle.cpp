#include <iostream>
using namespace std;

// CSC 134
// M1LAB - apple orchard
// Susanna Quayle
// 8/19/2024

int main() { 
  // movie name
  string movie_name = "Lord of the Rings: The Fellowship of the Ring";
  // movie year
  int movie_year = 2001;
  // price per apple
  string movie_profit = "$887.4 million";

  // store quotes
  string pippin_bfast = "Pippin: What about breakfast?\n"
                      "Aragorn: You've already had it.\n"
                      "Pippin: We've had one, yes. What about second breakfast?\n\n";

  string gandalf_late = "Frodo: You're late.\n"
                      "Gandalf: A wizard is never late, Frodo Baggins. Nor is he early. He"                          " arrives precisely when he means to.\n\n";

  string boromir_mordor = "Boromir: One does not simply walk into Mordor.";

  // print movie info
  cout << "The movie " << movie_name << " came out in " << movie_year << " and profited a total " << movie_profit << endl;

  cout << "\nThe beloved cast of characters includes a wise old wizard, a couple foolish young hobbits, an angry dwarf, slightly arrogant elf, and a singular human man." << endl;

  cout << "\n--- QUOTES ---" << endl;

  cout << pippin_bfast;

  cout << gandalf_late;

  cout << boromir_mordor;
    }