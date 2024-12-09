#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// CSC 134
// m6lab - raspberry roulette
// Susanna Quayle
// 12/6/24

const int MAX_HP = 2;

void load_magazine(vector<char>& magazine);
void player_turn(vector<char>& magazine, int& player_hp, int& dealer_hp, bool& player_extra_turn);
void dealer_turn(vector<char>& magazine, int& player_hp, int& dealer_hp);
bool is_magazine_empty(const vector<char>& magazine);

int main() 
{
    srand(static_cast<unsigned>(time(0)));

    int player_hp = MAX_HP;
    int dealer_hp = MAX_HP;
    vector<char> magazine;
    bool player_extra_turn = false;

    cout << "Welcome to Raspberry Roulette!\n";

    while (player_hp > 0 && dealer_hp > 0) 
    {
        load_magazine(magazine);

        while (!is_magazine_empty(magazine)) 
        {
            if (!player_extra_turn) 
            {
                player_turn(magazine, player_hp, dealer_hp, player_extra_turn);
                if (player_hp <= 0 || dealer_hp <= 0) break;
            }

            player_extra_turn = false;

            dealer_turn(magazine, player_hp, dealer_hp);
            if (player_hp <= 0 || dealer_hp <= 0) break;
        }

        if (is_magazine_empty(magazine)) 
        {
            cout << "No rounds left in the magazine. Starting a new round.\n\n";
        }
    }

    if (player_hp <= 0) 
    {
        cout << "The dealer wins!\n";
    } 
    else if (dealer_hp <= 0) 
    {
        cout << "The player wins!\n";
    }

    return 0;
}

void load_magazine(vector<char>& magazine) 
{
    magazine.clear();
    for (int i = 0; i < 6; ++i) 
    {
        magazine.push_back((rand() % 2 == 0) ? 'R' : 'B');
    }
    cout << "Magazine loaded with 6 rounds.\n";
}

void player_turn(vector<char>& magazine, int& player_hp, int& dealer_hp, bool& player_extra_turn) 
{
    if (is_magazine_empty(magazine)) 
    {
        cout << "No rounds left in the magazine.\n";
        return;
    }

    int choice;
    cout << "Player's turn! Aim at (1) Yourself or (2) Dealer: ";
    cin >> choice;

    char round = magazine.back();
    magazine.pop_back();

    if (round == 'B') 
    {
        cout << "Missed! Extra turn granted.\n";
        player_extra_turn = true;
    } 
    else 
    {
        cout << "Hit! Target loses 1 HP.\n";
        if (choice == 1) 
        {
            player_hp--;
        } 
        else 
        {
            dealer_hp--;
        }
    }
}

void dealer_turn(vector<char>& magazine, int& player_hp, int& dealer_hp) 
{
    if (is_magazine_empty(magazine)) 
    {
        cout << "No rounds left in the magazine.\n";
        return;
    }

    cout << "Dealer's turn!\n";
    int choice = (rand() % 2) + 1;

    char round = magazine.back();
    magazine.pop_back();

    if (round == 'B') 
    {
        cout << "Missed! Dealer gets no extra turn.\n";
    } 
    else 
    {
        cout << "Hit! Target loses 1 HP.\n";
        if (choice == 1) 
        {
            dealer_hp--;
        } 
        else 
        {
            player_hp--;
        }
    }
}

bool is_magazine_empty(const vector<char>& magazine) 
{
    return magazine.empty();
}