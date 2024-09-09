#include <iostream>
using namespace std;

// CSC 134
// M2LAB1 - calc cube volume
// Susanna Quayle
// 9/9/2024

// crate company selling crates must calculate size of crate, cost of production and customer cost

int main()
{
    // set up variables
    string name;
    int length;
    int width;
    int height;

    // greeting
    cout << "Hello user, what is your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;

    // questions
    cout << "Let's get the crate dimensions." << endl;
    cout << "What is the length?";
    cin >> length;
    cout << "What is the width?";
    cin >> width;

    // TODO calculations
    cout << "Crate is: " << width << " x " << length << endl;
}
