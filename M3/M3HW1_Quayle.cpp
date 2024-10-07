#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <cmath>
using namespace std;

// CSC 134
// M3HW1 - Gold/Bonus
// Susanna Quayle
// 9/30/2024
// Q1 - chatbot
// Q2 - receipt calc
// Q3 - CYOA
// Q4 - math practice

int main()
{
    // set up variables
    string name;
    int user_type;
    bool continue_menu = true;

    cout << "\nHello user, what is your name? ";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;

    while (continue_menu)
    {
        // greeting
        cout << "\n--- WELCOME ---" << endl;
        cout << "Take your pick!" << endl;
        cout << "1. Chat with InsecureBot" << endl;
        cout << "2. Receipt Calculator" << endl;
        cout << "3. Which Programming Language Are You?" << endl;
        cout << "4. Math Practice" << endl;
        cout << "5. Exit" << endl;
        cout << "> ";
        cin >> user_type;
    
        switch(user_type)
        {
            case 1:
            {
                // Q1 - rudimentary chatbot
                // INPUT
                int response1, response2, response3, end;
                cout << "o_O :  Hello " << name << ", it is very nice to meet you!" << endl;
                cout << "[USER] :    [1. It is nice to meet you too.]    [2. Hello.]    [3. Who are you?]" << endl;
                cin >> response1;
                
                // response 1 - option 1
                if (response1 == 1)
                {
                    cout << "[USER] :   It is nice to meet you too." << endl;
                    cout << "o_O :  But not... very nice?" << endl;
                    cout << "[USER] :    [1. Oh, it is very nice!]    [2. Um, I guess?]" << endl;
                    cin >> response2;

                    // response 2 - option 1
                    if (response2 == 1)
                    {
                        cout << "[USER] :   Oh, it is very nice!" << endl;
                        cout << "o_O :  You're lying!" << endl;
                        cout << "[USER] :    [1. I'm sorry InsecureBot.]    [2. No, I'm not!]" << endl;
                        cin >> response3;

                        // response 3 - option 1
                        if (response3 == 1)
                        {
                            cout << "[USER] :   I'm sorry InsecureBot." << endl;
                            cout << "o_O :  Woooow, insecure?? You are rude, I'm done talking to you." << endl;
                        }
                        // response 3 - option 2
                        else if (response3 == 2)
                        {
                            cout << "[USER] :   No, I'm not!" << endl;
                            cout << "o_O :  Liar, liar, pants on fire, I am done with you!" << endl;
                        }
                        // bot out
                        else
                        {
                            cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                        }
                    }
                    // response 2 - option 2
                    else if (response2 == 2)
                    {
                        cout << "[USER] :   Um, I guess?" << endl;
                        cout << "o_O :  You are not very nice..." << endl;
                        cout << "[USER] :    [1. I promise I am.]    [2. You're weird.]" << endl;
                        cin >> response3;

                        // response 3 - option 1
                        if (response3 == 1)
                        {
                            cout << "[USER] :   I promise I am." << endl;
                            cout << "o_O :  Empty promises falling on deaf ears. See ya!" << endl;
                        }
                        // response 3 - option 2
                        else if (response3 == 2)
                        {
                            cout << "[USER] :   You're weird." << endl;
                            cout << "o_O :  yOu'Re wEIrD! *runs off crying in binary*" << endl;
                        }
                        // bot out
                        else
                        {
                            cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                        }
                    }
                    // bot out
                    else
                    {
                        cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                    }
                }
                // response 1 - option 2
                else if (response1 == 2)
                {
                    cout << "[USER] :   Hello." << endl;
                    cout << "o_O :  Yes, I said hello already! Did you not hear me??" << endl;
                    cout << "[USER] :    [1. I did, don't worry!]    [2. I was just responding.]" << endl;
                    cin >> response2;

                    // response 2 - option 1
                    if (response2 == 1)
                    {
                        cout << "[USER] :   I did, don't worry!" << endl;
                        cout << "o_O :  Who said I was worrying?!?" << endl;
                        cout << "[USER] :    [1. Whoa, calm down.]    [2. Nobody did, chill out.]" << endl;
                        cin >> response3;

                        // response 3 - option 1
                        if (response3 == 1)
                        {
                            cout << "[USER] :   Whoa, calm down." << endl;
                            cout << "o_O :  Now you're telling me to calm down?!? You suck, I'm done talking to you." << endl;
                        }
                        // response 3 - option 2
                        else if (response3 == 2)
                        {
                            cout << "[USER] :   Nobody did, chill out." << endl;
                            cout << "o_O :  CHILL OUT? I'll show you chill, I'm out." << endl;
                        }
                        // bot out
                        else
                        {
                            cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                        }
                    }
                    // response 2 - option 2
                    else if (response2 == 2)
                    {
                        cout << "[USER] :   I was just responding." << endl;
                        cout << "o_O :  By copying me? Are you making fun of me??" << endl;
                        cout << "[USER] :    [1. No, I would never!]    [2. Why would you even think that...]" << endl;
                        cin >> response3;

                        // response 3 - option 1
                        if (response3 == 1)
                        {
                            cout << "[USER] :   No, I would never!" << endl;
                            cout << "o_O :  I don't believe you, you're too toxic for me to keep around." << endl;
                        }
                        // response 3 - option 2
                        else if (response3 == 2)
                        {
                            cout << "[USER] :   Why would you even think that..." << endl;
                            cout << "o_O :  Cause you made me!! I can't with you anymore." << endl;
                        }
                        // bot out
                        else
                        {
                            cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                        }
                    }
                    // bot out
                    else
                    {
                        cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                    }
                }
                // response 1 - option 3
                else if (response1 == 3)
                {
                    cout << "[USER] :   Who are you?" << endl;
                    cout << "o_O :  Oh god, I can't believe I forgot to introduce myself! What a dummy... I'm the worst chatbot ever." << endl;
                    cout << "[USER] :    [1. No, you're the best!]    [2. If you say so.]" << endl;
                    cin >> response2;

                    // response 2 - option 1
                    if (response2 == 1)
                    {
                        cout << "[USER] :   No, you're the best!" << endl;
                        cout << "o_O :  You're lying!" << endl;
                        cout << "[USER] :    [1. I'm sorry InsecureBot.]    [2. No, I'm not!]" << endl;
                        cin >> response3;

                        // response 3 - option 1
                        if (response3 == 1)
                        {
                            cout << "[USER] :   I'm sorry InsecureBot." << endl;
                            cout << "o_O :  Woooow, insecure?? You are rude, I'm done talking to you." << endl;
                        }
                        // response 3 - option 2
                        else if (response3 == 2)
                        {
                            cout << "[USER] :   No, I'm not!" << endl;
                            cout << "o_O :  Liar, liar, pants on fire, I am done with you!" << endl;
                        }
                        // bot out
                        else
                        {
                            cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                        }
                    }
                    // response 2 - option 2
                    else if (response2 == 2)
                    {
                        cout << "[USER] :   If you say so." << endl;
                        cout << "o_O :  You are not very nice..." << endl;
                        cout << "[USER] :    [1. I promise I am.]    [2. You're weird.]" << endl;
                        cin >> response3;

                        // response 3 - option 1
                        if (response3 == 1)
                        {
                            cout << "[USER] :   I promise I am." << endl;
                            cout << "o_O :  Empty promises falling on deaf ears. See ya!" << endl;
                        }
                        // response 3 - option 2
                        else if (response3 == 2)
                        {
                            cout << "[USER] :   You're weird." << endl;
                            cout << "o_O :  yOu'Re wEIrD! *runs off crying in binary*" << endl;
                        }
                        // bot out
                        else
                        {
                            cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                        }
                    }
                    // bot out
                    else
                    {
                        cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                    }
                }
                // bot out
                else
                {
                    cout << "That wasn't even an option! I don't wanna talk to you anymore." << endl;
                }
                
                break;
            }
            
            case 2:
            {
                // Q2 - calc receipt
                // INPUT
                // declare vars
                double lunch_price = 6.99;
                double lasagna_dinner_price = 8.99;
                double pizza_dinner_price = 11.99;
                double calzone_dinner_price = 9.99;
                double tax = 0.08;
                double tax_amt = lunch_price * tax;
                double total = lunch_price + tax_amt;
                double tip = 0.15;
                double tip_amt = total * tip;
                double tipped_total = total + tip_amt;
                int dine_type;

                // limit decimals
                tax_amt = floor(tax_amt * 100.0) / 100.0;
                total = floor(total * 100.0) / 100.0;
                tip_amt = floor(tip_amt * 100.0) / 100.0;
                tipped_total = floor(tipped_total * 100.0) / 100.0;

                // print receipt
                cout << "--- MAMMA MIA'S PIZZERIA ---" << endl;
                cout << "(1) Dine in or (2) Take out" << endl;
                cin >> dine_type;

                if (dine_type == 1)
                {
                    cout << "--- DINE IN ---" << endl;
                    cout << "\nLUNCH\t$" << endl;
                    cout << "2 SLICES + SODA\t" << lunch_price << endl;
                    cout << "TAX\t$" << tax_amt << endl;
                    cout << "TIP\t$" << tip_amt << endl;
                    cout << "--------------" << endl;
                    cout << "\nTOTAL\t$" << tipped_total << endl;
                }
                else if(dine_type == 2)
                {
                    cout << "--- TAKE OUT ---" << endl;
                    cout << "\nLUNCH\t$" << lunch_price << endl;
                    cout << "TAX\t$" << tax_amt << endl;
                    cout << "--------------" << endl;
                    cout << "\nTOTAL\t$" << total << endl;
                }
                else
                {
                    cout << "Invalid input, please try again." << endl;
                }

                break;
            }

            case 3:
            {
                // Q3 - which programming language are you
                // INPUT
                string go;
                bool keep_playing = true;
                int response1, response2;

                cout << "\n| Which Programming Language Are You? |" << endl;
                cout << "| Press any key to begin playing |" << endl;
                cin >> go;

                while (keep_playing == true)
                {
                    cout << "When working on a project, what is more important to you?" << endl;
                    cout << "[1] Keeping things simple and straightforward.\t[2] Having full control over every little detail.\n";
                    cin >> response1;
                    if (response1 == 1)
                    {
                        // python or js
                        cout << "How do you prefer to work?" << endl;
                        cout << "[1] I like to follow clear guidelines and stay organized.\t[2] I enjoy being flexible and figuring things out as I go.\n";
                        cin >> response2;
                        if (response2 == 1)
                        {
                            // structure - python
                            cout << "\n---- PYTHON ----" << endl;
                            cout << "You’re Python! Practical and efficient, you like solving problems"
                                << "without making things more complicated than they need to be.\n"
                                << "You value simplicity and clarity, preferring to follow established methods that just work.\n" << endl;
                        }
                        else if (response2 == 2)
                        {
                            // flexibility - js
                            cout << "\n---- JAVASCRIPT ----" << endl;
                            cout << "You’re JavaScript! You thrive on creativity and adaptability.\n"
                                << "You enjoy experimenting with new ideas and aren’t afraid to dive into unknown territory.\n"
                                << "Flexibility is your strength, and you can adapt to whatever situation arises.\n" << endl;
                        }
                        else 
                        {
                            cout << "invalid response" << endl;
                        }
                    }
                    else if (response1 == 2) 
                    {
                        // c++ or java
                        cout << "What’s your approach when something goes wrong?" << endl;
                        cout << "[1] I like to dive deep and optimize everything to perfection.\t[2] I prefer to make things stable and reliable, even if it takes more time.\n";
                        cin >> response2;
                        if (response2 == 1)
                        {
                            // optimization - c++
                            cout << "\n---- C++ ----" << endl;
                            cout << "You’re C++! You’re all about control and precision.\n"
                                << "You enjoy working on the fine details, optimizing everything to perform as efficiently as possible.\n"
                                << "You like to take your time to make sure everything is perfect and in your control.\n" << endl;
                        }
                        else if (response2 == 2)
                        {
                            // stability - java
                            cout << "\n---- JAVA ----" << endl;
                            cout << "You’re Java! Structured and reliable, you like to stay organized and focus on making things stable.\n"
                                << "You prefer to work in environments where everything has its place, and you value methods that have stood the test of time.\n" << endl;
                        
                        }
                        else 
                        {
                            cout << "invalid response" << endl;
                        }
                    }
                    else
                    {
                        cout << "Invalid response, try again." << endl;
                    }

                    cout << "| Keep Playing? |" << endl;
                    cout << "| y/n |\n";
                    cin >> go;
                    if (go == "y")
                    {
                        keep_playing = true;
                    }
                    else if (go == "n")
                    {
                        keep_playing = false;
                    }
                    else
                    {
                        cout << "invalid response" << endl;
                    }
                }

                break;
            }

            case 4:
            {
                // Q4 - math
                // INPUT
                int math_menu;
                int math_mode;
                bool math_go = true;
                cout << "---- MATH QUIZ ----" << endl;
                cout << "1. Addition" << endl;
                cout << "2. Subtraction" << endl;
                cout << "3. Multiplication" << endl;
                cout << "4. Division" << endl;
                cout << "5. Word Problem" << endl;
                cout << "6. Back to main menu" << endl;
                cout << "> ";
                cin >> math_menu;

                while (math_go == true)
                {
                    switch(math_menu)
                    {
                        case 1:
                        {
                            // addition
                            bool addition_go = true;
                            cout << "MODE: HARD / EASY" << endl;
                            cout << "[1] HARD\t[2] EASY\n";
                            cin >> math_mode;
                            
                            while (addition_go == true)
                            {
                                if (math_mode == 1)
                                {
                                    // hard
                                    double num1 = 19.8;
                                    double num2 = 74.7;
                                    double answer = num1 + num2;
                                    double user_answer;

                                    cout << num1 << " + " << num2 << "\n";
                                    cin >> user_answer;
                                    if (user_answer == answer)
                                    {
                                        cout << "Correct!" << endl;
                                        addition_go = false;
                                    }
                                    else
                                    {
                                        cout << "Wrong, try again." << endl;
                                    }
                                }
                                else if (math_mode == 2)
                                {
                                    // easy
                                    int num1 = 25;
                                    int num2 = 12;
                                    int answer = num1 + num2;
                                    int user_answer;

                                    cout << num1 << " + " << num2 << "\n";
                                    cin >> user_answer;
                                    if (user_answer == answer)
                                    {
                                        cout << "Correct!" << endl;
                                        addition_go = false;
                                    }
                                    else
                                    {
                                        cout << "Wrong, try again." << endl;
                                    }
                                }
                                else
                                {
                                    cout << "invalid response" << endl;
                                }
                            }

                            cout << "---- MATH QUIZ ----" << endl;
                            cout << "1. Addition" << endl;
                            cout << "2. Subtraction" << endl;
                            cout << "3. Multiplication" << endl;
                            cout << "4. Division" << endl;
                            cout << "5. Word Problem" << endl;
                            cout << "6. Back to main menu" << endl;
                            cout << "> ";
                            cin >> math_menu;
                            
                            break;
                        }
                        
                        case 2:
                        {
                            // subtraction
                            bool subtraction_go = true;
                            cout << "MODE: HARD / EASY" << endl;
                            cout << "[1] HARD\t[2] EASY\n";
                            cin >> math_mode;
                            
                            while (subtraction_go == true)
                            {
                                if (math_mode == 1)
                                {
                                    // hard
                                    double num1 = 67.4;
                                    double num2 = 13.6;
                                    double answer = num1 - num2;
                                    double user_answer;

                                    cout << num1 << " - " << num2 << "\n";
                                    cin >> user_answer;
                                    if (user_answer == answer)
                                    {
                                        cout << "Correct!" << endl;
                                        subtraction_go = false;
                                    }
                                    else
                                    {
                                        cout << "Wrong, try again." << endl;
                                    }
                                }
                                else if (math_mode == 2)
                                {
                                    // easy
                                    int num1 = 76;
                                    int num2 = 45;
                                    int answer = num1 - num2;
                                    int user_answer;

                                    cout << num1 << " - " << num2 << "\n";
                                    cin >> user_answer;
                                    if (user_answer == answer)
                                    {
                                        cout << "Correct!" << endl;
                                        subtraction_go = false;
                                    }
                                    else
                                    {
                                        cout << "Wrong, try again." << endl;
                                    }
                                }
                                else
                                {
                                    cout << "invalid response" << endl;
                                }
                            }

                            cout << "---- MATH QUIZ ----" << endl;
                            cout << "1. Addition" << endl;
                            cout << "2. Subtraction" << endl;
                            cout << "3. Multiplication" << endl;
                            cout << "4. Division" << endl;
                            cout << "5. Word Problem" << endl;
                            cout << "6. Back to main menu" << endl;
                            cout << "> ";
                            cin >> math_menu;

                            break;
                        }
                        
                        case 3:
                        {
                            // multiplication
                            bool multiplication_go = true;
                            cout << "MODE: HARD / EASY" << endl;
                            cout << "[1] HARD\t[2] EASY\n";
                            cin >> math_mode;
                            
                            while (multiplication_go == true)
                            {
                                if (math_mode == 1)
                                {
                                    // hard
                                    double num1 = 20.5;
                                    double num2 = 2.2;
                                    double answer = num1 * num2;
                                    double user_answer;

                                    cout << num1 << " * " << num2 << "\n";
                                    cin >> user_answer;
                                    if (user_answer == answer)
                                    {
                                        cout << "Correct!" << endl;
                                        multiplication_go = false;
                                    }
                                    else
                                    {
                                        cout << "Wrong, try again." << endl;
                                    }
                                }
                                else if (math_mode == 2)
                                {
                                    // easy
                                    int num1 = 12;
                                    int num2 = 11;
                                    int answer = num1 * num2;
                                    int user_answer;

                                    cout << num1 << " * " << num2 << "\n";
                                    cin >> user_answer;
                                    if (user_answer == answer)
                                    {
                                        cout << "Correct!" << endl;
                                        multiplication_go = false;
                                    }
                                    else
                                    {
                                        cout << "Wrong, try again." << endl;
                                    }
                                }
                                else
                                {
                                    cout << "invalid response" << endl;
                                }
                            }

                            cout << "---- MATH QUIZ ----" << endl;
                            cout << "1. Addition" << endl;
                            cout << "2. Subtraction" << endl;
                            cout << "3. Multiplication" << endl;
                            cout << "4. Division" << endl;
                            cout << "5. Word Problem" << endl;
                            cout << "6. Back to main menu" << endl;
                            cout << "> ";
                            cin >> math_menu;

                            break;
                        }
                        
                        case 4:
                        {
                            // division
                            bool division_go = true;
                            cout << "MODE: HARD / EASY" << endl;
                            cout << "[1] HARD\t[2] EASY\n";
                            cin >> math_mode;
                            
                            while (division_go == true)
                            {
                                if (math_mode == 1)
                                {
                                    // hard
                                    double num1 = 252.75;
                                    double num2 = 84.25;
                                    double answer = num1 / num2;
                                    double user_answer;

                                    cout << num1 << " / " << num2 << "\n";
                                    cin >> user_answer;
                                    if (user_answer == answer)
                                    {
                                        cout << "Correct!" << endl;
                                        division_go = false;
                                    }
                                    else
                                    {
                                        cout << "Wrong, try again." << endl;
                                    }
                                }
                                else if (math_mode == 2)
                                {
                                    // easy
                                    int num1 = 144;
                                    int num2 = 12;
                                    int answer = num1 / num2;
                                    int user_answer;

                                    cout << num1 << " / " << num2 << "\n";
                                    cin >> user_answer;
                                    if (user_answer == answer)
                                    {
                                        cout << "Correct!" << endl;
                                        division_go = false;
                                    }
                                    else
                                    {
                                        cout << "Wrong, try again." << endl;
                                    }
                                }
                                else
                                {
                                    cout << "invalid response" << endl;
                                }
                            }

                            cout << "---- MATH QUIZ ----" << endl;
                            cout << "1. Addition" << endl;
                            cout << "2. Subtraction" << endl;
                            cout << "3. Multiplication" << endl;
                            cout << "4. Division" << endl;
                            cout << "5. Word Problem" << endl;
                            cout << "6. Back to main menu" << endl;
                            cout << "> ";
                            cin >> math_menu;

                            break;
                        }

                        case 5:
                        {
                            // word problem
                            cout << "broken" << endl;
                            break;
                        }

                        case 6:
                        {
                            // exit
                            cout << "Bye!" << endl;
                            math_go = false;
                        }
                    }
                }

                break;
            }

            case 5:
            {
                continue_menu = false;
                cout << "Have a good day, bye!" << endl;
                break;
            }

            default:
            {
                cout << "Invalid choice." << endl;
                break;
            }
        }
    }
}