#include <iostream>
using namespace std;
// CSC 134
// M3LAB1 - sunken ship
// Susanna Quayle
// 9/22/2024



int main()
{
    int user_choice;
    string name;
    cout << "Hello! Welcome aboard the ship! What is your name?" << endl;
    cin >> name;
    cout << "\nAlright " << name << ", are you ready to brave these waters?\n\nOh it doesn't matter, you're aboard and we are set off to the seas!" << endl;

    cout << "       __|__               You wake up to the sound of thunder crashing around you.\n"
        << "       |     |              The ship is violently rocking as waves pound against its hull.\n"
        << "       |_____|   ~~~~~~     Water is rapidly filling the lower decks, and the storm is relentless.\n"
        << "       |     |  ~~~~~~~~    You realize the ship is sinking, and you have only moments to decide how to survive.\n"
        << "     __|_____|___________ \n"
        << "      \\           /         \n"
        << "       \\_________/          \n"
        << "       ~  ~   ~  ~          What will you take from the wreckage to chance your survival?\n" << endl;

    cout << " ~ ~ ~ ~ ~~~ ~~~ ~ ~ ~ ~ ~~~ ~ ~ ~ ~ ~ \n"
        << " ~  floating in the waves you see    ~ \n"
        << " ~  1. a rusty plank                 ~ \n"
        << " ~  2. a wooden door                 ~ \n"
        << " ~  3. a safety raft                 ~ \n"
        << " ~  4. a floating barrel             ~ \n"
        << " ~ ~ ~ ~ ~~~ ~ ~ ~ ~ ~~~ ~~~ ~ ~ ~ ~ ~ " << endl;

    cout << "\nWhich will you choose?" << endl;
    cin >> user_choice;

    if (user_choice == 1)
    {
        char yes_no;
        cout << "You have chosen the rusty plank! Are you ready to fight for your survival?" << endl;
        cin >> yes_no;
        cout << "The ocean does not wait for readiness!" << endl;
        cout << "~ ~ ~~~";
        cout << "     ~ ~~~     ~";
        cout << "~~~ ~  ~       ~";
        cout << "~      ~~~     ~~";
        cout << "Oh dear, it seems a shark has chewed off your legs while they dangled off your rusty plank and you bled out to death. RIP" << endl;

        cout << "     _______   \n";
        cout << "    /      \\  \n";
        cout << "   /        \\ \n";
        cout << "  |   R.I.P   | \n";
        cout << "  |           |    \n";
        cout << "  |  " << name << "  | \n";
        cout << "  |           |    \n";
        cout << "  |___________|    \n";
    }
}