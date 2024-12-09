#include <iostream>
#include <cstdlib>
using namespace std;

// CSC 134
// M6LAB1 - buckshot roulette SFW
// Susanna Quayle
// 12/6/2024

const int MAX_SIZE = 6;
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE = 2;

//global array for the magazine
int magazine[MAX_SIZE] = {0};

int main() 
{
    //range based for loop
    for (int shell : magazine) {
        cout << shell << ", ";
    }
    cout << endl;

    return 0;
}