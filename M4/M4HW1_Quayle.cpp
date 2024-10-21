#include <iostream>
#include <cstdlib>
#include <ctime>
// CSC 134
// M4HW1 - times tables
// Susanna Quayle
// 10/21/2024

using namespace std;

int main()
{
    int times_table = 0;
    int max = 12;
    int sent = 0;
    bool under_twelve = true;

    while (under_twelve == true)
    {
        cout << "Enter a number from 1-12: ";
        cin >> times_table;
        if (times_table <= 12)
        {
            while (sent <= max)
            {
                int multiplied_value = times_table * sent;
                cout << times_table << " times " << sent << " is " << multiplied_value << endl;
                sent++;
            }
        }
        else
        {   
            cout << "Number not between 1 and 12" << endl;
            under_twelve = false;
        }
    }
}