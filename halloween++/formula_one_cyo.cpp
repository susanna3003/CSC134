#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <thread>
#include <chrono>
#include "TextPrinter.h"
using namespace std;

// CSC 134
// HALLOWEEN++ (it's past halloween)
// Susanna Quayle
// 11/6/24

void print_with_delay();
void rookie_start();
void driver_start();
void drive_for_williams();
void drive_for_vcarb();
int soft_quali_williams();
int med_quali_williams();
int hard_quali_williams();
int soft_quali_vcarb();
int med_quali_vcarb();
int hard_quali_vcarb();

int main()
{
    // set up variables
    string name;
    int user_type;
    bool continue_menu = true;
    int team_choice;
    int tire_choice;

    cout << "\nHello user, what is your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;

    cout << "\t\tWelcome to\t\t" << endl;
    cout << "   _____  ____    ____   __  __   _   _  _        _      __" << endl;
    cout << "  |  ___||  _  \\ |  _ \\ |  \\/  | | | | || |      / \\    |  |" << endl;
    cout << "  | |__  | | | | | |_) || \\  / | | | | || |     / _ \\   |  |" << endl;
    cout << "  |  __| | |_| | |  _ < | |\\/| | | | | || |___ / ___ \\  |  |" << endl;
    cout << "  |_|     \\___/  |_| \\_\\|_|  |_| \\_____/\\_____/_/   \\_\\ |__|\n" << endl;

    cout << "You are an excited new rookie coming onto the grid fresh off of a successful season in F2!" << endl;
    cout << "You have been hand-picked by two different teams to take over an empty seat halfway through the season, a chance any rookie would jump at!" << endl;
    cout << "Do you drive for Williams or Visa Cash App Redbull?" << endl;
    cout << "[1. Williams Racing] [2. Visa Cash App Redbull]\n";
    while (!(cin >> team_choice)) 
    {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (team_choice == 1)
    {
        drive_for_williams();
    }
    else if (team_choice == 2)
    {
        drive_for_vcarb();
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    cout << "Saturday dawns on your first qualifying session as a Formula 1 driver. The team strategists are hard at work yet offer you the chance to choose your tires for the session." << endl;
    cout << "[1. Soft tires] [2. Medium tires] [3. Hard tires]\n";
    while (!(cin >> tire_choice)) 
    {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (team_choice == 1)
    {
        if (tire_choice == 1)
        {
            soft_quali_williams();
        }
        else if (tire_choice == 2)
        {
            med_quali_williams();
        }
        else if (tire_choice == 3)
        {
            hard_quali_williams();
        }
    }
    else if (team_choice == 2)
    {
        if (tire_choice == 1)
        {
            soft_quali_vcarb();
        }
        else if (tire_choice == 2)
        {
            med_quali_vcarb();
        }
        else if (tire_choice == 3)
        {
            hard_quali_vcarb();
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
}

void print_with_delay(const string& text, int delay_milliseconds = 50)
{
    for (char c : text) {
        cout << c;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(delay_milliseconds));
    }
    cout << endl;
}

void drive_for_williams()
{
    int convo_go;
    cout << "Congratulations on signing to team Williams!" << endl;
    cout << "Team principal James Vowles welcomes you proudly and enthusiastically with a gripping hand shake." << endl;
    cout << "'An American eh? You'll be a great fit for the team! Given you can perform better than Sargent...'" << endl;
    cout << "[1. Ask about Sargent] [2. Brush past the comment and go meet the rest of the team.]\n";
    while (!(cin >> convo_go)) 
    {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (convo_go == 1)
    {
        cout << "Upon inquiry you learn of your predecessor Logan Sargent, one of the only other American racers to join the grid." << endl;
        cout << "'He was a nice kid and a good racer... but not good enough.' is all Vowles has to share before he takes you off to meet the rest of the team." << endl;
    }
    else if (convo_go == 2)
    {
        cout << "Brushing past that comment, you join Vowles in the Williams garage to meet the team of mechanics and engineers who will be supporting you, and your car, through the season." << endl;
        cout << "'These are not the people to get on your bad side' Vowles quips, clapping your shoulder. 'They make the car go.. you just steer.'" << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
}

void drive_for_vcarb()
{
    int convo_go;
    cout << "Congratulations on signing to team Visa Cash App Redbull!" << endl;
    cout << "Team principal Laurent Mekies welcomes you cheerfully with a wide smile and a pat on the back." << endl;
    cout << "'Welcome to the team! I know, the name is a jumble... Yuki just started saying VCarb so we all went with it.'" << endl;
    cout << "[1. Ask about meeting Yuki] [2. Nod politely and go meet the rest of the team]\n";
    while (!(cin >> convo_go)) 
    {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (convo_go == 1)
    {
        cout << "A strange look comes over Mekies face when you ask about Yuki." << endl;
        cout << "'Look, Yuki has had a... long year. You're the third person to fill this seat this season alone. I think the poor guy may be getting...' ";
        cout << "Mekies looks around before leaning closer to whisper 'abandonment issues.' and nodding sorrowfully." << endl;
    }
    else if (convo_go == 2)
    {
        cout << "You eagerly follow Mekies to the VCarb garage to meet the team of mechanics and engineers who will be supporting you, and your car, through the season." << endl;
        cout << "'We have a good team here making sure everything runs smoothly on track!' Mekies grins gesturing at the crew standing around the garage." << endl;
        cout << "You are greeted by stares of the blank, confused, and some even shocked variety. 'Another driver?!?' you hear someone exclaim from across the garage";
        cout << " as an engineer a few feet away drops to his knees and begins muttering, holding his head." << endl;
        cout << "Mekies smiles at you wearily, pulling you to the side to explain 'It has been a long season here... after Ricciardo's shock exit we signed Lawson-'" << endl;
        cout << "The engineer on his knees cries out and jumps to cover the car, as if shielding it from some ominous presence. Mekies shakes his head sadly. 'Liam dragged our engineers through hell and back..." << endl;
        cout << "by the time we shipped him back to Melbourne, these cars had seen more pit time in a few races than they should in an entire season...'" << endl;
        cout << "[1. Stare at the scene in shock before rushing off to call your manager and beg him to let you sign with Williams] [2. Nod politely and offer a half-hearted word of encouragement]" << endl;
        while (!(cin >> convo_go)) 
        {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (convo_go == 1)
        {
            cout << "Your manager promptly refuses your request and assures you that VCarb is well equipped to give you a first glimpse at the world of Formula 1." << endl;
        }
        else if (convo_go == 2)
        {
            cout << "Your spare words of encouragement bring a bright smile to Mekies face. 'Well yes! That is why you are here!' he pats your back and looks out at the garage." << endl;
            cout << "'Or god help us all....' " << endl;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
}

int soft_quali_williams()
{
    cout << "You chose to qualify on the soft tires. You speed around the track, setting an impressive time on your first lap. The team calls you in and while in the pits, Verstappen sets best lap time." << endl;
    cout << "Your team gives you the green light for one more lap and in the time left you set a perfect lap, qualifying out in front of Verstappen and setting P1 for the race tomorrow." << endl;
}

int med_quali_williams()
{
    cout << "You chose to qualify on the medium tires. Your team is apprehensive about the decision but send you out on the track anyway. Your first lap time is far less than desirable so you go out in hopes of setting a better time." << endl;
    cout << "You push the car harder and harder on each turn until you brake too late in the bank and spin out, slamming into the barrier." << endl;
    cout << "Back in the garage you are greeted by sighs and defeated looks from engineers and mechanics alike. Someone points to the corner where James Vowles' head is bent, deep in conversation on his phone." << endl;
    cout << "'Yes, Sargent? This is Vowles. Look... mistakes may have been made. What are you doing next week?'" << endl;
}

int hard_quali_williams()
{

}

int soft_quali_vcarb()
{
    cout << "You chose to qualify on the soft tires. You speed around the track, setting an impressive time on your first lap. The team calls you in and while in the pits, Verstappen sets best lap time." << endl;
    cout << "Your team gives you the green light for one more lap and in the time left you set a perfect lap, qualifying out in front of Verstappen and setting P1 for the race tomorrow." << endl;
}

int med_quali_vcarb()
{
    cout << "You chose to qualify on the medium tires. Your team is apprehensive about the decision but send you out on the track anyway. Your first lap time is far less than desirable so you go out in hopes of setting a better time." << endl;
    cout << "You push the car harder and harder on each turn until you brake too late in the bank and spin out, slamming into the barrier." << endl;
    cout << "As you return to the garage, slowly, afraid to greet the already burnt-out and exhausted VCarb mechanics but you are surprised there is no crowd of disappointment to greet you. Instead, you see a surge of people in one corner of the garage, backed up against a door." << endl;
    cout << "You are uncertain whether they are locked out, or keeping something from coming in, until you hear a thud and see a dark shadowy figure slam against the door from the other side." << endl;
    cout << "'LET ME IN!' a loud, angry, Aussie voice comes ringing through. 'I NEVER WOULDA SPUN OUT ON THAT TURN!'" << endl;
    cout << "Mekies retreats from the crowd to fall back next to you, a panicked look in his eyes. 'I don't know how he even got on the grid... he shouldn't have gotten past security.'" << endl;
    cout << "'THAT AMERICAN PRICK DOESN'T DESERVE MY SPOT!' more yells come through the door and Mekies runs back into the crowd. A nearly-foot-shorter-than-you Yuki Tsunoda appears at your elbow with a blank stare to quip 'Spun out and landed P20 huh... tough luck for your first race.'" << endl;
    cout << "You sigh and survey the scene in front of you. Tough luck indeed." << endl;
}

int hard_quali_vcarb()
{

}