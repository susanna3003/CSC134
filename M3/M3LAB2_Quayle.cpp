#include <iostream>
using namespace std;
// CSC 134
// M3LAB2 - grades
// Susanna Quayle
// 9/24/2024

int main()
{
    int grade_num;
    string grade_letter;

    cout << "Enter a grade: ";
    cin >> grade_num;

    if (grade_num >= 90 && grade_num <= 100) 
    {
        grade_letter = "A";
        cout << "Grade is " << grade_letter << endl;
    }
    else if (grade_num >= 80 && grade_num <= 89)
    {
        grade_letter = "B";
        cout << "Grade is " << grade_letter << endl;
    }
    else if (grade_num >= 70 && grade_num <= 79)
    {
        grade_letter = "C";
        cout << "Grade is " << grade_letter << endl;
    }
    else if (grade_num >= 60 && grade_num <= 69)
    {
        grade_letter = "D";
        cout << "Grade is " << grade_letter << endl;
    }
    else if (grade_num >= 0 && grade_num <= 59)
    {
        grade_letter = "F";
        cout << "Grade is " << grade_letter << endl;
    }
    else
    {
        grade_letter = "A+";
        cout << "Grade is " << grade_letter << ", great job!" << endl;
    }
}