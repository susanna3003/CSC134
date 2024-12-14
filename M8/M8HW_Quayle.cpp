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
int get_choice_two();
int get_choice_three();
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

// globals for changing text speed and player name
const int SLOW = 80;
const int MEDIUM = 40;
const int FAST = 20;
int spd, delay;
string name;

int main()
{
    // set up variables
    int user_type;
    bool continue_menu = true;
    int team_choice, tire_choice, pit_choice;

    cout << "Enter player name: " << endl;
    cin >> name;
    cout << "Enter text speed 1(slow) 2(medium) 3(fast): ";
    int spd = get_choice_three();
    if (spd == 1) 
    {
        delay = SLOW;
    }
    else if (spd == 2) 
    {
        delay = MEDIUM;
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
    team_choice = get_choice_two();
    if (team_choice == 1)
    {
        drive_for_williams();
    }
    else if (team_choice == 2)
    {
        drive_for_vcarb();
    }

    // CHAP 2: TIRE PICK FOR QUALI WILLIAMS
    print_with_delay("Saturday dawns on your first qualifying session as a Formula 1 driver. The team strategists are hard at work yet offer you the chance to choose your tires for the session.", delay);
    cout << "[1. Soft tires] [2. Medium tires] [3. Hard tires]\n" << endl;
    tire_choice = get_choice_three();
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

    // CHAP 3: RACE DAY
    print_with_delay("\nThe sun is shining bright over the Circuit Zandvoort, and the air is buzzing with excitement.", delay);
    print_with_delay("Welcome to race day at the Dutch Grand Prix!", delay);
    if (team_choice == 1)
    {
        // WILLIAMS
        if (tire_choice == 1)
        {   // p2
            int first_turn;
            print_with_delay("You’re starting from P2, right alongside Verstappen. The lights go out and you both shoot down the straight approaching the first turn rapidly.", delay);
            print_with_delay("You have a split-second choice to make: attempt to overtake on the inside or stay patient and hold place behind Verstappen?", delay);
            print_with_delay("[1. Overtake inside] [2. Hold place]", delay);
            first_turn = get_choice_two();
            if (first_turn == 1)
            {
                print_with_delay("You attempt to overtake inside but Verstappen quickly jumps to the defense and you are forced to slam on the brakes, losing significant speed on the turn.", delay);
                print_with_delay("Your slick move costs you 4 positions and you suddenly find yourself in 5th place following Lewis Hamilton's Mercedes.", delay);
            }
            else if (first_turn == 2)
            {
                print_with_delay("You maintain position behind Verstappen and it pays off, by lap 28 you are still in second place and expecting Verstappen to pit soon.", delay);
            }
            print_with_delay("On lap 36 your engineer radios in, 'How are those tires feeling? If we're gonna make this a one-stop we gotta make sure it's on the right tire.'", delay);
            print_with_delay("If you choose the mediums you will have no issue finishing the race, but contenders on the soft tires may be able to outpace you.", delay);
            print_with_delay("If you choose the soft tires you have a chance at overtaking and shooting for the podium, however it will be a gamble to finish out the race on those tires.", delay);
            cout << "[1. Soft] [2. Medium]\n" << endl;
            pit_choice = get_choice_two();
            if (pit_choice == 1)
            {
                print_with_delay("The pit stop is complete, and you've switched to the soft tires. The fresh rubber gives you an immediate burst of pace as you rejoin the track.", delay);
                print_with_delay("You’re now in P6, but the race is far from over. The leaders are ahead, and the soft tires give you a chance to close the gap.", delay);
                print_with_delay("As you push harder, you catch up to Verstappen, who is in P1. The fresh tires make all the difference, and you're closing the gap quickly.", delay);
                print_with_delay("On the final lap you cross the line just behind Verstappen, taking a stunning second place in your rookie season!", delay);
                soft_early_pit_williams();
            }
            else if (pit_choice == 2)
            {
                print_with_delay("The pit stop is complete, and you've switched to the medium tires. The pace is consistent, and you're now in P7, right in the thick of the midfield battle.", delay);
                print_with_delay("With your medium tires, you're able to maintain a steady pace, but the leaders on soft tires are pulling away. You’re not able to make significant inroads into the top positions.", delay);
                print_with_delay("You battle hard to keep your position, and by the time you reach the final laps, you're securely in the points, but there’s no real threat of making it to the podium.", delay);
                print_with_delay("You cross the line in P7, a solid finish for your rookie season. You’ve shown great consistency and have secured valuable points for Williams.", delay);
                soft_late_pit_williams();
            }
        }
        else if (tire_choice == 2)
        {   // p20
            int first_turn;
            print_with_delay("You’re starting from P20, deep in the field of roaring engines and chaos. The lights go out, and you surge down the straight alongside a sea of other cars, all vying for position.", delay);
            print_with_delay("Approaching the first turn, the track narrows, and you have a split-second decision to make: dive down the inside and risk it all, or stay cautious and look for openings later?", delay);
            print_with_delay("[1. Dive inside] [2. Stay cautious]", delay);
            first_turn = get_choice_two();
            if (first_turn == 1)
            {
                print_with_delay("You dive down the inside, threading the needle through the pack, but it’s tight, and contact is inevitable!", delay);
                print_with_delay("Your bold move gains you 5 positions, but you’ve slightly damaged your front wing, affecting your handling.", delay);
            }
            else if (first_turn == 2)
            {
                print_with_delay("You stay cautious, letting the chaos unfold ahead of you. By the end of the first lap, you've gained 2 positions by avoiding incidents.", delay);
                print_with_delay("Your engineer praises your composure over the radio, saying, 'Good call, plenty of race left to make gains!'", delay);
            }
            print_with_delay("As the laps progress, you find yourself in a heated midfield battle. On lap 36, your engineer radios in: 'We need to think about strategy. How are the tires holding up?'", delay);
            print_with_delay("If you choose the soft tires, you might carve your way up to the points, but you’ll have to manage wear carefully. If you choose the mediums, you’ll have a steadier pace and better durability.", delay);
            cout << "[1. Soft] [2. Medium]\n" << endl;
            pit_choice = get_choice_two();
            if (pit_choice == 1)
            {
                print_with_delay("After your pit stop, you’re back out on track with fresh soft tires. You’re in P15, and you feel a surge of energy as the soft rubber gives you a real pace advantage.", delay);
                print_with_delay("The field ahead of you is a mix of slower cars and those on worn tires. You’re determined to make the most of these fresh tires and claw your way up.", delay);
                print_with_delay("On lap 62, you catch sight of P10, the last points-paying position. This is it—your chance to get into the points. The soft tires are wearing down, but you’ve got enough left in the tank.", delay);
                print_with_delay("You dive for an inside move on P10, and it’s tight! You manage to muscle your way past, securing P10 with only a few laps to go.", delay);
                print_with_delay("As the final laps tick down, you cross the line in P10, securing your first-ever points in your rookie season. A well-executed strategy pays off!", delay);
                med_early_pit_williams();
            }
            else if (pit_choice == 2)
            {
                print_with_delay("After your pit stop, you emerge back on track with medium tires. You’re in P16, and the pace is steady and reliable.", delay);
                print_with_delay("You start to make progress, passing a few drivers who are struggling on worn tires. The steady pace on medium tires helps you avoid any mistakes, and you’re able to maintain your position.", delay);
                print_with_delay("You’re nearing the final laps, and the cars ahead are starting to show signs of tire wear. With a smart overtake on turn 12, you move up to P11 with only a few laps remaining.", delay);
                print_with_delay("However, as the race comes to an end, there’s no more time to make any further moves. You cross the line in P11, just outside the points, but still a strong finish from P20.", delay);
                med_late_pit_williams();
            }
        }
        else if (tire_choice == 3)
        {   // p19
            int first_turn;
            print_with_delay("You’re starting from P19, just ahead of the backmarkers but with a lot of work to do. The lights go out, and you launch forward, threading through the chaos of midfield battles as the pack funnels toward Turn 1.", delay);
            print_with_delay("Approaching the first turn, the cars in front are jostling for position, leaving you with two options: swing wide to avoid the crowd or take a risky inside line to gain positions.", delay);
            print_with_delay("[1. Swing wide] [2. Risk the inside]", delay);
            first_turn = get_choice_two();
            if (first_turn == 1)
            {
                print_with_delay("You swing wide, avoiding the cluster of cars, but lose a bit of time on the exit as you struggle to rejoin the racing line.", delay);
                print_with_delay("Your caution pays off—two cars collide ahead, and you safely overtake them to gain 3 positions. You’re now running in P16, just behind Yuki Tsunoda.", delay);
            }
            else if (first_turn == 2)
            {
                print_with_delay("You dive to the inside, making a daring move through the narrow gap, but it’s a close call—nearly clipping the Haas ahead of you.", delay);
                print_with_delay("Your boldness earns you 5 positions, jumping up to P14, but your tires take a slight hit from aggressive braking into the turn.", delay);
            }
            print_with_delay("The race settles into a rhythm as you push hard to catch the midfield pack. By lap 36, your engineer radios in: 'We’re at the pit window. Strategy call—how are you feeling out there?'", delay);
            print_with_delay("If you go for soft tires, you’ll have a shot at catching the top 10 but risk a drop-off in performance near the end. Mediums will keep you consistent, but overtaking will be tougher.", delay);
            cout << "[1. Soft] [2. Medium]\n" << endl;
            pit_choice = get_choice_two();
            if (pit_choice == 1)
            {
                print_with_delay("After your pit stop, you’re back out on track with fresh soft tires. You’re in P15, and you feel a surge of energy as the soft rubber gives you a real pace advantage.", delay);
                print_with_delay("The field ahead of you is a mix of slower cars and those on worn tires. You’re determined to make the most of these fresh tires and claw your way up.", delay);
                print_with_delay("On lap 32, you catch sight of P10, the last points-paying position. This is it—your chance to get into the points. The soft tires are wearing down, but you’ve got enough left in the tank.", delay);
                print_with_delay("You dive for an inside move on P10, and it’s tight! You manage to muscle your way past, securing P10 with only a few laps to go.", delay);
                print_with_delay("As the final laps tick down, you cross the line in P10, securing your first-ever points in your rookie season. A well-executed strategy pays off!", delay);
                hard_early_pit_williams();
            }
            else if (pit_choice == 2)
            {
                print_with_delay("After your pit stop, you emerge back on track with medium tires. You’re in P16, and the pace is steady and reliable.", delay);
                print_with_delay("You start to make progress, passing a few drivers who are struggling on worn tires. The steady pace on medium tires helps you avoid any mistakes, and you’re able to maintain your position.", delay);
                print_with_delay("You’re nearing the final laps, and the cars ahead are starting to show signs of tire wear. With a smart overtake on turn 12, you move up to P11 with only a few laps remaining.", delay);
                print_with_delay("However, as the race comes to an end, there’s no more time to make any further moves. You cross the line in P11, just outside the points, but still a strong finish from P20.", delay);
                hard_late_pit_williams();
            }
        }
    }
    else if (team_choice == 2)
    {
        // VCARB
        if (tire_choice == 1)
        {   // p3
            int first_turn;
            print_with_delay("You’re starting from P3, just behind Verstappen and Norris. The lights go out, and you get a clean start, surging down the straight alongside Norris as the pack barrels toward the first turn.", delay);
            print_with_delay("Approaching the first turn, Verstappen pulls ahead, but Norris is within reach. You need to decide: push hard to challenge Norris on the outside or tuck in behind and conserve your position.", delay);
            print_with_delay("[1. Challenge Norris] [2. Hold position]", delay);
            first_turn = get_choice_two();
            if (first_turn == 1)
            {
                print_with_delay("You go wheel-to-wheel with Norris on the outside, pushing late on the brakes. It’s a gutsy move, but Norris holds his line and squeezes you wide on the exit.", delay);
                print_with_delay("You lose momentum and get overtaken by Hamilton, dropping to P4 by the end of the first lap.", delay);
            }
            else if (first_turn == 2)
            {
                print_with_delay("You stay tucked in behind Norris, avoiding unnecessary risk. Your patience pays off as you get a great exit out of Turn 2, sticking close to Norris’s gearbox.", delay);
                print_with_delay("By lap 5, you’ve held onto P3 and are well-positioned to fight for a podium as the race unfolds.", delay);
            }
            print_with_delay("The laps tick by, and you find yourself in the middle of a strategic battle. On lap 36, your engineer radios in: 'Tires are holding up well, but we need to think about the next stint.'", delay);
            print_with_delay("If you choose the soft tires, you can push to challenge for P2, but tire degradation might become an issue. If you choose the mediums, you’ll have better longevity but might struggle to keep pace with Norris and Verstappen.", delay);
            cout << "[1. Soft] [2. Medium]\n" << endl;
            pit_choice = get_choice_two();
            if (pit_choice == 1)
            {
                print_with_delay("You dive into the pit and emerge back on track with fresh soft tires. You're now in P4, just behind Lando Norris, but your tires give you a serious advantantage and you're able to close the gap in no time.",delay);
                print_with_delay("The battle for P3 is on! You tuck in behind Norris, waiting for the perfect opportunity to make your move. On lap 25, you see your chance. He’s struggling with tire wear, and you’re right on his tail.", delay);
                print_with_delay("You make a bold move on the inside at turn 7, a risky overtake, but the soft tires give you the grip you need. You edge ahead of Norris and take P3!", delay);
                print_with_delay("With just a few laps to go, you hold off Norris and manage to keep the position, your fresh tires still holding strong.", delay);
                print_with_delay("You cross the finish line in P3, securing your first podium in what could be a career-defining race. The soft tire strategy paid off!", delay);
                soft_early_pit_vcarb();
            }
            else if (pit_choice == 2)
            {
                print_with_delay("You come out of the pit stop on medium tires. You’re now in P5, right behind Lando Norris.", delay);
                print_with_delay("The battle with Norris is intense, but without the pace of the soft tires, you're having to work harder to stay on his tail.", delay);
                print_with_delay("In the final laps, you try a daring move to dive up the inside of Norris at turn 12, but he defends the position well. You’re still in P4, but the tires are starting to give up.", delay);
                print_with_delay("As the laps wind down, the tires begin to show signs of wear. Norris holds his ground, and despite your best efforts, you cross the finish line in P4, just behind him.", delay);
                print_with_delay("It’s still a strong finish, but the medium tire strategy just didn’t have the pace to challenge for a podium today. You finish P4, a solid result, but the podium slipped away.", delay);
                soft_late_pit_vcarb();
            }
        }
        else if (tire_choice == 2)
        {   // p11
            int first_turn;
            print_with_delay("You’re starting from P11, just outside the points, with a golden opportunity to break into the top 10. The lights go out, and you get a strong launch, quickly closing the gap to the cars ahead as the midfield chaos unfolds.", delay);
            print_with_delay("Approaching the first turn, the pack is tightly bunched. You see two options: dive to the inside to gain positions or take the safer outside line to avoid potential incidents.", delay);
            print_with_delay("[1. Dive inside] [2. Play it safe on the outside]", delay);
            first_turn = get_choice_two();
            if (first_turn == 1)
            {
                print_with_delay("You dive to the inside, making a daring move through the narrow gap. It’s a high-risk play, but you keep it clean, gaining 3 positions and jumping into P8 by the end of the turn.", delay);
                print_with_delay("Your engineer radios in: 'Great move! Let’s keep this momentum going.'", delay);
            }
            else if (first_turn == 2)
            {
                print_with_delay("You take the outside line, steering clear of the chaos. It’s a cautious move, but it pays off as two cars ahead tangle, gifting you 2 positions.", delay);
                print_with_delay("By the end of the first lap, you’re in P9, comfortably in the points and with a clear path to attack the cars ahead.", delay);
            }
            print_with_delay("The race heats up as you find yourself in a midfield scrap. On lap 36, your engineer radios in: 'You’ve got some decent pace—time to think about strategy for the final stint.'", delay);
            print_with_delay("If you go for the soft tires, you’ll have a chance to push for a higher finish, but you’ll need to manage them carefully. The medium tires will ensure you stay consistent but may limit overtaking opportunities.", delay);
            cout << "[1. Soft] [2. Medium]\n" << endl;
            pit_choice = get_choice_two();
            if (pit_choice == 1)
            {
                print_with_delay("You pit for soft tires, emerging back on track in P15 with fresh rubber and renewed energy. The soft tires give you an immediate pace advantage, and you're determined to claw your way back up the order.", delay);
                print_with_delay("On lap 64, you find yourself in P9, chasing down two drivers in a tight battle for P7. You see your opportunity at turn 10 and execute a daring double overtake, sending the crowd into a frenzy!", delay);
                print_with_delay("The soft tires begin to degrade in the final laps, but you've managed to build a comfortable gap behind you. As the checkered flag waves, you cross the line in P7—a stunning recovery drive that earns you well-deserved points.", delay);
                print_with_delay("Your team is thrilled, and the paddock is buzzing about your rookie performance. A risky strategy on soft tires paid off, showcasing your skill and determination.", delay);
                med_early_pit_vcarb();
            }
            else if (pit_choice == 2)
            {
                print_with_delay("You pit for medium tires and rejoin the race in P14. The medium tires provide stability and consistency, but without the raw pace of the softs, overtakes will require patience.", delay);
                print_with_delay("Over the next several laps, you manage to overtake a few struggling drivers as the field begins to spread out. By lap 58, you’ve climbed back into P11, just outside the points.", delay);
                print_with_delay("The medium tires hold up well, and you’re able to fend off pressure from behind. As the final laps tick down, you cross the finish line in P10, securing a single point for your rookie campaign.", delay);
                print_with_delay("It’s a steady and respectable finish, showcasing smart tire management and solid driving. The medium tire strategy helped you avoid unnecessary risks, and the team is pleased with your performance.", delay);
                med_late_pit_vcarb();
            }
        }
        else if (tire_choice == 3)
        {   // p20
            int first_turn;
            print_with_delay("You’re starting from P20, at the very back of the grid, with a lot of ground to make up. The lights go out, and you floor the throttle, weaving through the pack as you race toward the first turn.", delay);
            print_with_delay("As you approach the first turn, the cars ahead are jostling for position. There’s a gap on the inside, but it’s risky—if you take it, you might gain several positions, but it could also end in disaster. On the other hand, you could play it safe and wait for a better moment.", delay);
            print_with_delay("[1. Risk it all on the inside] [2. Play it safe and wait for a better opportunity]", delay);
            first_turn = get_choice_two();
            if (first_turn == 1)
            {
                print_with_delay("You go for it, diving down the inside with a bold move. It’s a narrow opening, and you barely squeeze through, overtaking 5 cars in a single swoop!", delay);
                print_with_delay("Your heart races as you emerge from the chaos, now in P15. That risky move pays off—you're in striking distance of the points!", delay);
            }
            else if (first_turn == 2)
            {
                print_with_delay("You decide to play it safe, letting the other cars battle it out ahead of you. However, the pack ahead is slowing down as they jockey for position.", delay);
                print_with_delay("Suddenly, two cars ahead of you make contact and spin out, causing a massive chain reaction. You’re caught up in the wreck and crash out on the opening lap.", delay);
                print_with_delay("The race is over before it even began. Tough luck, rookie.", delay);
                return 0;
            }
            print_with_delay("As the race progresses, you find yourself in a tense midfield fight. On lap 36, your engineer radios in: 'Good job keeping your nose clean. How are the tires feeling? It’s time to start thinking about the next stint.'", delay);
            print_with_delay("If you choose the soft tires, you could make a big push for the points, but it’s risky—will they last until the end? If you choose the medium tires, you’ll have a more consistent pace, but the soft-tire runners might overtake you.", delay);
            cout << "[1. Soft] [2. Medium]\n" << endl;
            pit_choice = get_choice_two();
            if (pit_choice == 1)
            {
                print_with_delay("You pit for soft tires and rejoin the race in P18. The fresh rubber gives you an immediate boost, and you waste no time in hunting down the cars ahead.", delay);
                print_with_delay("You see your chance at turn 8—a daring dive on the inside allows you to snatch three positions in one go. The crowd roars as you rocket into P15!", delay);
                print_with_delay("The soft tires begin to lose their edge, but you keep pushing. With three laps to go, you spot P10 ahead—a single point within reach. With one last burst of effort, you pull off a clean overtake on the final lap.", delay);
                print_with_delay("As the checkered flag waves, you cross the line in P10, securing your first point of the season. The team celebrates your aggressive drive, and the paddock takes notice of your rookie potential.", delay);
                print_with_delay("A bold strategy on soft tires pays off, earning you a hard-fought result and the respect of your team and competitors alike.", delay);
                hard_early_pit_vcarb();
            }
            else if (pit_choice == 2)
            {
                print_with_delay("You pit for medium tires and rejoin the race in P19. The medium compound doesn’t offer the pace of the softs, but you still manage to climb to P16.", delay);
                print_with_delay("As the laps tick by, you find yourself in P13 after a couple of well-timed overtakes and an incident ahead involving two drivers battling too hard.", delay);
                print_with_delay("With five laps to go, the medium tires are holding steady, and you close in on P11. Despite your best efforts, the gap to P10 is just out of reach.", delay);
                print_with_delay("You cross the finish line in P11, a strong performance from the back of the grid but narrowly missing out on the points. The team applauds your composure and tire management, noting your impressive climb from P20.", delay);
                print_with_delay("Though you didn’t score points today, this race proves your potential and sets the stage for even better results in the future.", delay);
                hard_late_pit_vcarb();
            }
        }
    } 
}

// FUNCTIONS
void print_with_delay(const string& text, int delay_milliseconds)
{
    for (char c : text) {
        cout << c;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(delay_milliseconds));
    }
    cout << endl;
}

int get_choice_two() {
    int choice;
    while (true) {
        cin >> choice;
        if (cin.fail() || (choice != 1 && choice != 2)) 
        {
            // Clear error state and discard invalid input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter 1 or 2: ";
        } 
        else 
        {
            break;
        }
    }
    return choice;
}

int get_choice_three() {
    int choice;
    while (true) {
        cin >> choice;
        if (cin.fail() || (choice < 1 || choice > 3)) 
        {
            // Clear error state and discard invalid input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter 1, 2, or 3: ";
        } else 
        {
            break;
        }
    }
    return choice;
}

void drive_for_williams()
{
    int convo_go;
    print_with_delay("Congratulations on signing to team Williams!", delay);
    print_with_delay("Team principal James Vowles welcomes you proudly and enthusiastically with a gripping hand shake.", delay);
    print_with_delay("'An American eh? You'll be a great fit for the team! Given you can perform better than Sargent...'", delay);
    cout << "[1. Ask about Sargent] [2. Brush past the comment and go meet the rest of the team.]\n" << endl;
    convo_go = get_choice_two();
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
}

void drive_for_vcarb()
{
    int convo_go;
    print_with_delay("Congratulations on signing to team Visa Cash App Redbull!", delay);
    print_with_delay("Team principal Laurent Mekies welcomes you cheerfully with a wide smile and a pat on the back.", delay);
    print_with_delay("'Welcome to the team! We sure are happy to have you.. I wasn't sure where we'd get our next driver after we had to... um... let go of Lawson.'", delay);
    cout << "[1. Ask what happened with Lawson] [2. Ask about meeting Yuki] [3. Nod politely and go meet the rest of the team]\n" << endl;
    convo_go = get_choice_three();
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
        convo_go = get_choice_two();
        if (convo_go == 1)
        {
            print_with_delay("Your manager promptly refuses your request and assures you that VCarb is well equipped to give you a first glimpse at the world of Formula 1.", delay);
        }
        else if (convo_go == 2)
        {
            print_with_delay("Your spare words of encouragement bring a bright smile to Mekies face. 'Well yes! That is why you are here!' he pats your back and looks out at the garage.", delay);
            print_with_delay("'Or god help us all....' ", delay);
        }
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
    print_with_delay("You chose to qualify on the medium tires. The engineers exchange confused glances, but Mekies reluctantly gives the go-ahead.", delay);
    print_with_delay("Your lap times are atrocious, and you're struggling to find grip in every corner. Halfway through the lap, Yuki Tsunoda appears in your mirrors, clearly annoyed.", delay);
    print_with_delay("'Yuki is closing in fast,' the race engineer warns. 'Don’t let him ruin your lap—or his!'", delay);
    print_with_delay("Spurned by the pressure of Tsunoda in your rear views, you push your pace and set your best time yet, making it out of Q1, just ahead of Tsunoda.", delay);
    print_with_delay("Your performance in Q2 is almost good enough for a start from the points, but not quite, and your place on the grid is set at P11.", delay);
}

void hard_quali_vcarb()
{
    print_with_delay("You chose to qualify on the hard tires. Your team is apprehensive about the decision but send you out on the track anyway. Your first lap time is far less than desirable so you go out in hopes of setting a better time and making it out of Q1.", delay);
    print_with_delay("You push the car harder and harder on each turn until you brake too late in the bank and spin out, slamming into the barrier.", delay);
    print_with_delay("You return to the garage and see a surge of people in one corner of the garage, backed up against a door. A voice comes through the other side,", delay);
    print_with_delay("'LET ME IN!' a loud, angry, Aussie voice comes ringing through. 'I NEVER WOULDA SPUN OUT ON THAT TURN!'", delay);
    print_with_delay("Mekies retreats from the crowd to fall back next to you, a panicked look in his eyes. 'I don't know how he even got on the grid... he shouldn't have gotten past security.'", delay);
    print_with_delay("'THAT AMERICAN PRICK DOESN'T DESERVE MY SPOT!' more yells come through the door and Mekies runs back into the crowd. A nearly-foot-shorter-than-you Yuki Tsunoda appears at your elbow with a blank stare to quip 'Spun out and landed P20 huh... tough luck for your first race.'", delay);
    print_with_delay("You sigh and survey the scene in front of you. Tough luck indeed.", delay);
}

void soft_early_pit_williams()
{
    // ROOKIE FINISHES P2 BEHIND VERSTAPPEN
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  1  | Max Verstappen       |\n"
    << "\t|  2  | " << name << "🎉     |\n"
    << "\t|  3  | Lando Norris         |\n"
    << "\t|  4  | Lewis Hamilton       |\n"
    << "\t|  5  | Carlos Sainz         |\n"
    << "\t+----------------------------+\n";
}
void soft_late_pit_williams()
{
    // late pit strat - P7
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  6  | Oscar Piastri        |\n"
    << "\t|  7  | " << name << "🎉     |\n"
    << "\t|  8  | George Russell       |\n"
    << "\t|  9  | Lewis Hamilton       |\n"
    << "\t|  10 | Fernando Alonso      |\n"
    << "\t+----------------------------+\n";
}
void med_early_pit_williams()
{
    // early pit strategy - P10
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  9  | Fernando Alonso      |\n"
    << "\t|  10 | " << name << "🎉     |\n"
    << "\t|  11 | Yuki Tsunoda         |\n"
    << "\t|  12 | Pierre Gasly         |\n"
    << "\t|  13 | Esteban Ocon         |\n"
    << "\t+----------------------------+\n";
}
void med_late_pit_williams()
{
    // late pit strat - P11
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  10  | Fernando Alonso     |\n"
    << "\t|  11  | " << name << "🎉    |\n"
    << "\t|  12  | Pierre Gasly        |\n"
    << "\t|  13  | Yuki Tsunoda        |\n"
    << "\t|  14  | Nico Hulkenberg     |\n"
    << "\t+----------------------------+\n";
}
void hard_early_pit_williams()
{
    // early pit strategy - P10
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  9  | Fernando Alonso      |\n"
    << "\t|  10 | " << name << "🎉     |\n"
    << "\t|  11 | Yuki Tsunoda         |\n"
    << "\t|  12 | Pierre Gasly         |\n"
    << "\t|  13 | Esteban Ocon         |\n"
    << "\t+----------------------------+\n";
}
void hard_late_pit_williams()
{
    // late pit strat - P11
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  10  | Fernando Alonso     |\n"
    << "\t|  11  | " << name << "🎉    |\n"
    << "\t|  12  | Pierre Gasly        |\n"
    << "\t|  13  | Yuki Tsunoda        |\n"
    << "\t|  14  | Nico Hulkenberg     |\n"
    << "\t+----------------------------+\n";
}
void soft_early_pit_vcarb()
{
    // early pit strat - P3
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  1  | Max Verstappen       |\n"
    << "\t|  2  | Lando Norris         |\n"
    << "\t|  4  | " << name << "🎉     |\n"
    << "\t|  2  | Charles Leclerc      |\n"
    << "\t|  5  | Carlos Sainz         |\n"
    << "\t+----------------------------+\n";
}
void soft_late_pit_vcarb()
{
    // late pit strat - P4
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  1  | Max Verstappen       |\n"
    << "\t|  2  | Lando Norris         |\n"
    << "\t|  3  | Charles Leclerc      |\n"
    << "\t|  4  | " << name << "🎉     |\n"
    << "\t|  5  | Carlos Sainz         |\n"
    << "\t+----------------------------+\n";
}
void med_early_pit_vcarb()
{
    // early pit strat - P7
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  6  | Oscar Piastri        |\n"
    << "\t|  7  | " << name << "🎉     |\n"
    << "\t|  8  | George Russell       |\n"
    << "\t|  9  | Lewis Hamilton       |\n"
    << "\t|  10 | Fernando Alonso      |\n"
    << "\t+----------------------------+\n";
}
void med_late_pit_vcarb()
{
    // late pit strat - P10
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  9  | Fernando Alonso      |\n"
    << "\t|  10 | " << name << "🎉     |\n"
    << "\t|  11 | Yuki Tsunoda         |\n"
    << "\t|  12 | Pierre Gasly         |\n"
    << "\t|  13 | Esteban Ocon         |\n"
    << "\t+----------------------------+\n";
}
void hard_early_pit_vcarb()
{
    // early pit strat - P10
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  9  | Fernando Alonso      |\n"
    << "\t|  10 | " << name << "🎉     |\n"
    << "\t|  11 | Yuki Tsunoda         |\n"
    << "\t|  12 | Pierre Gasly         |\n"
    << "\t|  13 | Esteban Ocon         |\n"
    << "\t+----------------------------+\n";
}
void hard_late_pit_vcarb()
{
    // late pit strat - P11
    cout << "\n\t🏁 GRAND PRIX FINAL RESULTS 🏁\n"
    << "\t+----------------------------+\n"
    << "\t| POS | DRIVER               |\n"
    << "\t+-----+----------------------+\n"
    << "\t|  10  | Fernando Alonso     |\n"
    << "\t|  11  | " << name << "🎉    |\n"
    << "\t|  12  | Pierre Gasly        |\n"
    << "\t|  13  | Yuki Tsunoda        |\n"
    << "\t|  14  | Nico Hulkenberg     |\n"
    << "\t+----------------------------+\n";
}