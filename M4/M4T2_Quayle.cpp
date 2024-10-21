#include <iostream>
// CSC 134
// M4T2 - input validation
// Susanna Quayle
// 10/14/2024

using namespace std;

void counting();

int main()
{
    // input validation
    const int MIN_PLAYERS = 1;
    const int MAX_PLAYERS = 4;
    int num_players;
    cout << "How many players? (1-4): ";
    cin >> num_players;
    while (num_players < MIN_PLAYERS || num_players > MAX_PLAYERS){
        // error!
        cout << "Incorrect choice, please choose between " << MIN_PLAYERS;
        cout << " and " << MAX_PLAYERS << endl;
        cin >> num_players;
    }
    cout << "correct!" << endl;
    return 0;
}

void counting()
{
    // while
    cout << "version 1: while" << endl;
    int num = 0;
    while (num < 5){
        cout << num << endl;
        num++;
    }
    // for
    cout << "version 2: for" << endl;
    for (int n=0; n<5; n++){
        cout << n << endl;
    }
    // do while
    cout << "version 3: do" << endl;
    do {
        cout << num << endl;
    }
    while (num < 5);
}
