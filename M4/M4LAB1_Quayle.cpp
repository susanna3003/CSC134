#include <iostream>
#include <cstdlib>
#include <ctime>
// CSC 134
// M4LAB1 - asterisksss
// Susanna Quayle
// 10/14/2024

using namespace std;

int main()
{
    int height, width, j, i;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter a width: ";
    cin >> width;

    for (int i=0; i < height; i++)
    {
        for (int j=0; j < width; j++) 
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}