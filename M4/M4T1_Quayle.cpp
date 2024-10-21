#include <iostream>
// CSC 134
// M4T1 - counting and squaring
// Susanna Quayle
// 10/8/2024 

using namespace std;

int main()
{
    cout << "M4T1 - Basic Loops" << endl;
    cout << "Simple loop" << endl;
    int num_from_user;
    cout << "\nGive me a number from 1 - 100" << endl;
    cin >> num_from_user;

    cout << "\nCounting from " << num_from_user << " to 100." << endl;

    while (num_from_user <= 100)
    {
        cout << num_from_user << endl;
        num_from_user +=1;
    }

    cout << "Finished" << endl;

    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    cout << endl;
    cout << "Number\t|\tNumber squared" << endl;
    int numb = MIN_NUM;
    while (numb <= MAX_NUM)
    {
        cout << numb << "\t|\t" << numb*numb << endl;
        numb++;
    }
    return 0;
}
