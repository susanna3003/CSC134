#include <iostream>
using namespace std;
// CSC 134
// M3T1 - rectangle calc
// Susanna Quayle
// 9/16/2024

int main() 
{ 
    // two rectangle vars
    int width1;
    int length1;
    int width2;
    int length2;
    int area1, area2;

    // INPUT rectangle measurements
    cout << "Rectangle 1 - input width: ";
    cin >> width1;
    cout << "Rectangle 1 - input length: ";
    cin >> length1;

    cout << "Rectangle 2 - input width: ";
    cin >> width2;
    cout << "Rectangle 2 - input length: ";
    cin >> length2;

    // PROCESS calculate rectangles
    area1 = width1 * length1;
    area2 = width2 * length2;

    // OUTPUT display rectangle sizes and which is larger
    cout << "The first rectangle's area is: " << area1 << endl;
    cout << "The second rectangle's area is: " << area2 << endl;

    if (area1 > area2) 
    {
        cout << "The first rectangle is larger." << endl;
    }
    else if (area2 > area1)
    {
        cout << "The second rectangle is larger." << endl;
    }
    else
    {
        cout << "The rectangles are the same size!" << endl;
    }
}