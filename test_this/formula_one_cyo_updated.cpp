#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <thread>
#include <chrono>
#include "delay_print.h"
using namespace std;

// CSC 134
// HALLOWEEN++ (it's past halloween)
// Susanna Quayle
// 11/6/24

void print_with_delay(const string& text, int delay_milliseconds);
void rookie_start();
void driver_start();
void drive_for_williams();
void drive_for_vcarb();
void soft_quali_williams();
void med_quali_williams();
void hard_quali_williams();
void soft_quali_vcarb();
void med_quali_vcarb();
void hard_quali_vcarb();
void soft_early_pit_williams();
void soft_late_pit_williams();
void med_early_pit_williams();
void med_late_pit_williams();
void hard_early_pit_williams();
void hard_late_pit_williams();
void soft_early_pit_vcarb();
void soft_late_pit_vcarb();
void med_early_pit_vcarb();
void med_late_pit_vcarb();
void hard_early_pit_vcarb();
void hard_late_pit_vcarb();
void overtake_battle_williams();
void overtake_battle_vcarb();

// globals for changing text speed
const int SLOW = 80;
const int MEDIUM = 40;
const int FAST = 20;
int spd, delay;

int main()
{
    // set up variables
    string name;
    int user_type;
    bool continue_menu = true;
    int team_choice, tire_choice, pit_choice;

    // AN - make better
 
    cout << "Enter text speed 1(slow) 2(medium) 3(fast): ";
    while (!(cin >> spd)) 
    {
        cout << "Invalid input. Please enter an integer: " << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (spd == 1) 
    {
        delay = SLOW;
    }
    else if (spd == 3) 
    {
        delay = FAST;
    }
    else 
    {
        // default to medium
        delay = MEDIUM;
    }

    print_with_delay("\t\tWelcome to\t\t", delay);
    cout << "   _____  ____    ____   __  __   _   _  _        _      __" << endl;
    cout << "  |  ___||  _  \\ |  _ \\ |  \\/  | | | | || |      / \\    |  |" << endl;
    cout << "  | |__  | | | | | |_) || \\  / | | | | || |     / _ \\   |  |" << endl;
    cout << "  |  __| | |_| | |  _ < | |\\/| | | | | || |___ / ___ \\  |  |" << endl;
    cout << "  |_|     \\___/  |_| \\_\\|_|  |_| \\_____/\\_____/_/   \\_\\ |__|\n" << endl;

    print_with_delay("You are an excited new rookie coming onto the grid fresh off of a successful season in F2!", delay);
    print_with_delay("You have been hand-picked by two different teams to take over an empty seat halfway through the season, a chance any rookie would jump at!", delay);
    // CHAP 1: TEAM PICK
    print_with_delay("Do you drive for Williams or Visa Cash App Redbull?", delay);
    cout << "[1. Williams Racing] [2. Visa Cash App Redbull]\n" << endl;
    while (!(cin >> team_choice)) 
    {
        cout << "Invalid input. Please enter an integer: " << endl;
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

    // CHAP 2: TIRE PICK FOR QUALI WILLIAMS
    print_with_delay("Saturday dawns on your first qualifying session as a Formula 1 driver. The team strategists are hard at work yet offer you the chance to choose your tires for the session.", delay);
    cout << "[1. Soft tires] [2. Medium tires] [3. Hard tires]\n" << endl;
    while (!(cin >> tire_choice)) 
    {
        cout << "Invalid input. Please enter an integer: " << endl;
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

    // CHAP 3: RACE DAY
    print_with_delay("\nThe sun is shining bright over the Circuit of the Americas, and the air is buzzing with excitement.", delay);
    print_with_delay("Welcome to race day at the Austin, Texas Grand Prix!", delay);
    if (team_choice == 1)
    {
        // WILLIAMS
        if (tire_choice == 1)
        {
            print_with_delay("The grandstands are a wall of orange, and the energy is electric as you line up on the grid at Zandvoort. Verstappen is on pole, with you in P2, the best starting position Williams has seen in years.", delay);
            print_with_delay("Your engineer radios in: 'Alright, rookie. Max is ahead, but remember: even he had to start somewhere. Let’s give him a run for his money.' The lights go out, and you get a solid start.", delay);
            print_with_delay("'Great launch!' your engineer cheers. 'We’re P2 and holding steady. Let’s stay within DRS range—he won’t like the sight of that blue car in his mirrors.'", delay);
            print_with_delay("Lap 3 arrives, and the Red Bull is starting to pull away slightly. Your engineer reassures you: 'No worries, he’s just burning through his tires. Keep it smooth, and we’ll catch him later.'", delay);
            print_with_delay("By Lap 6, your tires are feeling the strain. Verstappen is still ahead, and you notice Albon creeping closer behind. 'Alright, we’ve got Alex behind us, so keep it clean. He’s not exactly in the mood to play nice after qualifying.'", delay);
            print_with_delay("Lap 9 brings your first big decision. The team radios in: 'Okay, rookie. Time to decide. Do we box now to cover the undercut, or stretch these tires a bit longer? Your call.'", delay);
            cout << "[1. Pit Now] [2. Pit Later]\n" << endl;
            while (!(cin >> pit_choice)) 
            {
                cout << "Invalid input. Please enter an integer: " << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            if (pit_choice == 1)
            {
                soft_early_pit_williams();
            }
            else if (pit_choice == 2)
            {
                soft_late_pit_williams();
            }
        }
        else if (tire_choice == 2)
        {
            if (pit_choice == 1)
            {
                med_early_pit_williams();
            }
            else if (pit_choice == 2)
            {
                med_late_pit_williams();
            }
        }
        else if (tire_choice == 3)
        {
            if (pit_choice == 1)
            {
                hard_early_pit_williams();
            }
            else if (pit_choice == 2)
            {
                hard_late_pit_williams();
            }
        }
    }
    else if (team_choice == 2)
    {
        print_with_delay("The sea of orange in the stands doesn’t faze you as you line up in P3 at Zandvoort. Verstappen is on pole, and Perez sits ahead in P2. It’s a Red Bull lockout up front, but you’re ready to shake things up.", delay);
        print_with_delay("The lights go out, and you’re off! The soft tires hook up beautifully, and you charge into Turn 1, pulling alongside Perez. A bit of wheel-to-wheel action leaves you just behind him but still in P3.", delay);
        print_with_delay("The laps tick by, and the battle for P2 is heating up. Perez is defending aggressively, but you’re keeping close. 'Alright, you’ve got the pace. Just stay patient—he’s looking shaky in the corners,' your engineer encourages.", delay);
        print_with_delay("By Lap 6, your rear tires start to degrade, and you feel the car sliding slightly through Turn 3. The team radios: 'Alright, we’re seeing a bit of wear on the rears. Let’s think about when to box.'", delay);
        print_with_delay("On Lap 9, the radio crackles: 'Okay, champ, time to make the call. Box this lap and try the undercut, or stay out and go long? Your move.'", delay);
        cout << "[1. Pit Now] [2. Pit Later]\n" << endl;
        while (!(cin >> pit_choice)) 
        {
            cout << "Invalid input. Please enter an integer: " << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (tire_choice == 1)
        {
            if (pit_choice == 1)
            {
                soft_early_pit_vcarb();
            }
            else if (pit_choice == 2)
            {
                soft_late_pit_vcarb();
            }
        }
        else if (tire_choice == 2)
        {
            if (pit_choice == 1)
            {
                med_early_pit_vcarb();
            }
            else if (pit_choice == 2)
            {
                med_late_pit_vcarb();
            }
        }
        else if (tire_choice == 3)
        {
            if (pit_choice == 1)
            {
                hard_early_pit_vcarb();
            }
            else if (pit_choice == 2)
            {
                hard_late_pit_vcarb();
            }
        }
    }
    else
    {
        cout << "Invalid choice" << endl;
    }  
}

void print_with_delay(const string& text, int delay_milliseconds)
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
    print_with_delay("Congratulations on signing to team Williams!", delay);
    print_with_delay("Team principal James Vowles welcomes you proudly and enthusiastically with a gripping hand shake.", delay);
    print_with_delay("'An American eh? You'll be a great fit for the team! Given you can perform better than Sargent...'", delay);
    cout << "[1. Ask about Sargent] [2. Brush past the comment and go meet the rest of the team.]\n" << endl;
    while (!(cin >> convo_go)) 
    {
        cout << "Invalid input. Please enter an integer: " << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (convo_go == 1)
    {
        print_with_delay("Upon inquiry you learn of your predecessor Logan Sargent, one of the only other American racers to join the grid.", delay);
        print_with_delay("'He was a nice kid and a good racer... but not good enough.' is all Vowles has to share before he takes you off to meet the rest of the team."), delay;
    }
    else if (convo_go == 2)
    {
        print_with_delay("Brushing past that comment, you join Vowles in the Williams garage to meet the team of mechanics and engineers who will be supporting you, and your car, through the season.", delay);
        print_with_delay("'These are not the people to get on your bad side' Vowles quips, clapping your shoulder. 'They make the car go.. you just steer.'", delay);
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
}

void drive_for_vcarb()
{
    int convo_go;
    print_with_delay("Congratulations on signing to team Visa Cash App Redbull!", delay);
    print_with_delay("Team principal Laurent Mekies welcomes you cheerfully with a wide smile and a pat on the back.", delay);
    print_with_delay("'Welcome to the team! We sure are happy to have you.. I wasn't sure where we'd get our next driver after we had to... um... let go of Lawson.'", delay);
    cout << "[1. Ask what happened with Lawson] [2. Ask about meeting Yuki] [3. Nod politely and go meet the rest of the team]\n" << endl;
    while (!(cin >> convo_go)) 
    {
        cout << "Invalid input. Please enter an integer: " << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (convo_go == 1)
    {
        print_with_delay("Mekies grimaces at your inquiry. 'Liam was a very skilled driver...' he starts apprehensively before looking around and leaning in closer.", delay);
        print_with_delay("'but look, that crazy Aussie successfully pissed off half the grid within his first week here. Once the Spanish Mafia began poking around...'", delay);
        print_with_delay("Mekies shrugs and sighs. 'Look... but you're here now to break our unlucky streak!'", delay);
    }
    if (convo_go == 2)
    {
        print_with_delay("A strange look comes over Mekies face when you ask about Yuki.", delay);
        print_with_delay("'Look, Yuki has had a... long year. You're the third person to fill this seat this season alone. I think the poor guy may be getting...' ", delay);
        print_with_delay("Mekies looks around before leaning closer to whisper 'abandonment issues.' and nodding sorrowfully.", delay);
    }
    else if (convo_go == 3)
    {
        print_with_delay("You eagerly follow Mekies to the VCarb garage to meet the team of mechanics and engineers who will be supporting you, and your car, through the season.", delay);
        print_with_delay("'We have a good team here making sure everything runs smoothly on track!' Mekies grins gesturing at the crew standing around the garage.", delay);
        print_with_delay("You are greeted by stares of the blank, confused, and some even shocked variety. 'Another driver?!?' you hear someone exclaim from across the garage", delay);
        print_with_delay(" as an engineer a few feet away drops to his knees and begins muttering, holding his head.", delay);
        print_with_delay("Mekies smiles at you wearily, pulling you to the side to explain 'It has been a long season here... after Ricciardo's shock exit we signed Lawson-'", delay);
        print_with_delay("The engineer on his knees cries out and jumps to cover the car, as if shielding it from some ominous presence. Mekies shakes his head sadly. 'Liam dragged our engineers through hell and back...", delay);
        print_with_delay("by the time we shipped him back to Melbourne, these cars had seen more pit time in a few races than they should in an entire season...'", delay);
        cout << "[1. Stare at the scene in shock before rushing off to call your manager and beg him to let you sign with Williams] [2. Try to offer a half-hearted word of encouragement]" << endl;
        while (!(cin >> convo_go)) 
        {
            cout << "Invalid input. Please enter an integer: " << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (convo_go == 1)
        {
            print_with_delay("Your manager promptly refuses your request and assures you that VCarb is well equipped to give you a first glimpse at the world of Formula 1.", delay);
        }
        else if (convo_go == 2)
        {
            print_with_delay("Your spare words of encouragement bring a bright smile to Mekies face. 'Well yes! That is why you are here!' he pats your back and looks out at the garage.", delay);
            print_with_delay("'Or god help us all....' ", delay);
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

void soft_quali_williams()
{
    print_with_delay("You chose to qualify on the soft tires. You speed around the track, setting an impressive time on your first lap. Miraculously, you make it through Q1 and then somehow Q2.", delay);
    print_with_delay("After setting a pace getting you 4th place, the team calls you in and while in the pits, Verstappen sets best lap time.", delay);
    print_with_delay("Your team gives you the green light for one more lap and in the time left you set a perfect lap, qualifying just behind Verstappen and setting a start from P2.", delay);
    print_with_delay("When you get back to the garage there is an uproar from the engineers all congratulating you and wishing you luck on the start tomorrow.", delay);
}

void med_quali_williams()
{
    print_with_delay("You chose to qualify on the medium tires. Your team is apprehensive about the decision but send you out on the track anyway. You make it through Q1 but your first lap time on Q2 is far less than desirable so you go out in hopes of setting a better time.", delay);
    print_with_delay("You push the car harder and harder on each turn until you brake too late in the bank and spin out, slamming into the barrier.", delay);
    print_with_delay("Back in the garage you are greeted by sighs and defeated looks from engineers and mechanics alike. Someone points to the corner where James Vowles' head is bent, deep in conversation on his phone.", delay);
    print_with_delay("'Yes, Sargent? This is Vowles. Look... mistakes may have been made. What are you doing next week?'", delay);
    print_with_delay("Despite the damage to the car and the inevitable pit lane start, you made P12 in qualifying, giving you hope for a comeback during the race.", delay);
}

void hard_quali_williams()
{
    print_with_delay("You chose to qualify on the hard tires. The engineers exchange worried looks, but James Vowles gives a slow nod, muttering, 'Let’s see what happens.'", delay);
    print_with_delay("As you head out on track, the radio chimes in: 'Alright, first driver in years to try hards in qualifying. If this works, it’s genius. If not... well, we tried.'", delay);
    print_with_delay("Your out lap feels more like a Sunday drive than a flying lap, with the tires refusing to warm up. By the time you cross the line to start your first timed lap, you're already in trouble.", delay);
    print_with_delay("Midway through your lap, the car begins to slide through every corner. 'Grip? What grip?' your race engineer jokes, though his voice betrays concern.", delay);
    print_with_delay("Out of nowhere, Alex Albon appears in your mirrors, and the radio warns: 'Albon is behind you, and he’s not thrilled with your pace. Don’t hold him up.'", delay);
    print_with_delay("Over the radio, you hear Albon yell, 'Seriously? We’re not fighting for pole here, mate!'", delay);
    print_with_delay("As you trundle back into the garage, the engineers avoid eye contact. The atmosphere is heavy and James Vowles is in the corner on a phone call where you can hear snippets of conversation.", delay);
    print_with_delay("'Yes, Logan? It’s Vowles. Look, we might’ve... miscalculated. What’s your availability next weekend?'", delay);
    print_with_delay("Your qualifying ends with P19, just ahead of the car that spun out.", delay);
}

void soft_quali_vcarb()
{
    print_with_delay("You chose to qualify on the soft tires. You speed around the track, setting an impressive time on your first lap. Miraculously, you make it through Q1 and then somehow Q2.", delay);
    print_with_delay("After setting a pace getting you 4th place, the team calls you in and while in the pits, Verstappen sets best lap time.", delay);
    print_with_delay("Your team gives you the green light for one more lap and in the time left you set a perfect lap, qualifying in P3, shocking yourself and the engineers who are radioing in with their congratulations.", delay);
}

void med_quali_vcarb()
{
    print_with_delay("You chose to qualify on the medium tires. Your team is apprehensive about the decision but send you out on the track anyway. Your first lap time is far less than desirable so you go out in hopes of setting a better time and making it out of Q1.", delay);
    print_with_delay("You push the car harder and harder on each turn until you brake too late in the bank and spin out, slamming into the barrier.", delay);
    print_with_delay("As you return to the garage, slowly, afraid to greet the already burnt-out and exhausted VCarb mechanics you are surprised there is no crowd of disappointment to greet you. Instead, you see a surge of people in one corner of the garage, backed up against a door.", delay);
    print_with_delay("You are uncertain whether they are locked out, or keeping something from coming in, until you hear a thud and see a dark shadowy figure slam against the door from the other side.", delay);
    print_with_delay("'LET ME IN!' a loud, angry, Aussie voice comes ringing through. 'I NEVER WOULDA SPUN OUT ON THAT TURN!'", delay);
    print_with_delay("Mekies retreats from the crowd to fall back next to you, a panicked look in his eyes. 'I don't know how he even got on the grid... he shouldn't have gotten past security.'", delay);
    print_with_delay("'THAT AMERICAN PRICK DOESN'T DESERVE MY SPOT!' more yells come through the door and Mekies runs back into the crowd. A nearly-foot-shorter-than-you Yuki Tsunoda appears at your elbow with a blank stare to quip 'Spun out and landed P20 huh... tough luck for your first race.'", delay);
    print_with_delay("You sigh and survey the scene in front of you. Tough luck indeed.", delay);
}

void hard_quali_vcarb()
{
    print_with_delay("You chose to qualify on the hard tires. The engineers exchange confused glances, but Mekies reluctantly gives the go-ahead.", delay);
    print_with_delay("As you pull out onto the track, the radio crackles: 'Alright, you're the only one on hards, so let's make it... uh, interesting.'", delay);
    print_with_delay("The out lap feels sluggish, like you're driving on a frozen lake. By the time you start your flying lap, the tires are still stone cold.", delay);
    print_with_delay("Your lap times are atrocious, and you're struggling to find grip in every corner. Halfway through the lap, Yuki Tsunoda appears in your mirrors, clearly annoyed.", delay);
    print_with_delay("'Yuki is closing in fast,' the race engineer warns. 'Don’t let him ruin your lap—or his!'", delay);
    print_with_delay("Before you can react, Yuki dives down the inside, forcing you wide. Your flying lap is ruined, and you both get stuck in a heated exchange of hand gestures on the cool-down lap.", delay);
    print_with_delay("Back in the garage, the team is not impressed. The engineers are furiously shaking their heads, while one mutters, 'Why didn’t we just keep the crazy Australian...'", delay);
    print_with_delay("Your qualifying ends with P20, and Mekies offers a half-hearted 'good luck' before the garage empties out.", delay);
}

void soft_early_pit_williams()
{
    // early pit strategy
}
void soft_late_pit_williams()
{
    // late pit strat
}
void med_early_pit_williams()
{
    // early pit strategy
}
void med_late_pit_williams()
{
    // late pit strat
}
void hard_early_pit_williams()
{
    // early pit strategy
}
void hard_late_pit_williams()
{
    // late pit strat
}
void soft_early_pit_vcarb()
{
    // early pit strat
}
void soft_late_pit_vcarb()
{
    // late pit strat
}
void med_early_pit_vcarb()
{
    // early pit strat
}
void med_late_pit_vcarb()
{
    // late pit strat
}
void hard_early_pit_vcarb()
{
    // early pit strat
}
void hard_late_pit_vcarb()
{
    // late pit strat
}
void overtake_battle_williams()
{
    // overtake battle
}
void overtake_battle_vcarb()
{
    // overtaking battle
}