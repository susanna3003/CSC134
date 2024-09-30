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
        cout << "3. Choose Your Own" << endl;
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
                double meal_price = 5.99;
                double tax = 0.08;
                double tax_amt = meal_price * tax;
                double total = meal_price + tax_amt;
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
                    cout << "\nLUNCH\t$" << meal_price << endl;
                    cout << "TAX\t$" << tax_amt << endl;
                    cout << "TIP\t$" << tip_amt << endl;
                    cout << "--------------" << endl;
                    cout << "\nTOTAL\t$" << tipped_total << endl;
                }
                else if(dine_type == 2)
                {
                    cout << "--- TAKE OUT ---" << endl;
                    cout << "\nLUNCH\t$" << meal_price << endl;
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
                // Q3 - choose your own adventure
                // INPUT
                

                // PROCESS
                

                // OUTPUT


                break;
            }

            case 4:
            {
                // Q4 - math
                // INPUT


                // PROCESS


                //OUTPUT


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