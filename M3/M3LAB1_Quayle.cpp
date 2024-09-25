#include <iostream>
using namespace std;
// CSC 134
// M3LAB1 - sunken ship
// Susanna Quayle
// 9/22/2024



int main()
{
    int user_choice;
    string rand_input;
    string name;
    cout << "Hello! Welcome aboard the ship! What is your name?" << endl;
    cin >> name;
    cout << "\nAlright " << name << ", are you ready to brave these waters?" << endl;
    cin >> rand_input;
    cout << "\nOh it doesn't matter, you're aboard and we are set off to the seas!\n" << endl;

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
        cout << "~      ~~~     ~~" << endl;
        cout << "Oh dear, it seems a shark has chewed off your legs while they dangled off your rusty plank and you bled out to death. RIP" << endl;

        cout << "     _______   \n"
             << "    /       \\  \n"
             << "   /         \\ \n"
             << "  |   R.I.P   | \n"
             << "  |           |    \n"
             << "  |  " << name << "  | \n"
             << "  |           |    \n"
             << "  |___________|    \n";
    }
    else if(user_choice == 2)
    {
        cout << "You have chosen the wooden door!" << endl;
        cout << "Unfortunately, this was also chosen by a snobby British girl and she has taken up all of the room on the door. You are left to hold on with your legs dangling in the water where a shark chews them off and you bleed to death. RIP" << endl;
                
        cout << "     _______   \n"
             << "    /       \\  \n"
             << "   /         \\ \n"
             << "  |   R.I.P   | \n"
             << "  |           |    \n"
             << "  |  " << name << "  | \n"
             << "  |           |    \n"
             << "  |___________|    \n";
    }
    else if (user_choice == 3)
    {
        cout << "You have chosen the safety raft! Not bad..." << endl;
        cout << "This raft leads you to a wild tropical island where the islanders welcome you and make you king!" << endl;

        cout << "    \\ /         \\ /         \\ /         \\ /\n"
             << "     o           o           o           o \n"
             << "    /|\\         /|\\         /|\\         /|\\    \n"
             << "    / \\         / \\         / \\         / \\    \n";
    }
    else if (user_choice == 4)
    {
        cout << "You have chosen the floating barrel. A very wise choice." << endl;
        cout << "The barrel floats into a harbor bay where you are taken to safety, the only survivor of this deadly crash. Congratulations!" << endl;

        cout << "\n    \\     YAY!!!     /\n"
             << "     \\______________/\n"
             << "     |              |\n"
             << "  \\  |   " << name << " did it!|  /\n"
             << "   \\ |   Survivor!   | /\n"
             << "    \\|______________|/\n"
             << "       Congratulations!\n"
             << "\n";
    }
    else
    {
        cout << "That wasn't one of the options... you have drowned in your indecisiveness. RIP" << endl;

        cout << "     _______   \n"
             << "    /       \\  \n"
             << "   /         \\ \n"
             << "  |   R.I.P   | \n"
             << "  |           |    \n"
             << "  |  " << name << "  | \n"
             << "  |           |    \n"
             << "  |___________|    \n";
    }
}