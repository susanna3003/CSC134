#include <iostream>
using namespace std;
// CSC 134
// M3LAB2 - grades
// Susanna Quayle
// 9/24/2024
// IDEAS FOR IMPROVEMENT
// throw grade letter into func
// loop program in while loop, ask user for class name, num students, and prompt for student name before grade
// repeat back each grade as "[name]'s grade is [grade_letter]"
// when finished looping print each student name and grade

string getLetterGrade(int grade_num)
{
    string grade_letter;

    if (grade_num >= 90 && grade_num <= 100) 
    {
        grade_letter = "A";
        //cout << "Grade is " << grade_letter << endl;
    }
    else if (grade_num >= 80 && grade_num <= 89)
    {
        grade_letter = "B";
        //cout << "Grade is " << grade_letter << endl;
    }
    else if (grade_num >= 70 && grade_num <= 79)
    {
        grade_letter = "C";
        //cout << "Grade is " << grade_letter << endl;
    }
    else if (grade_num >= 60 && grade_num <= 69)
    {
        grade_letter = "D";
        //cout << "Grade is " << grade_letter << endl;
    }
    else if (grade_num >= 0 && grade_num <= 59)
    {
        grade_letter = "F";
        //cout << "Grade is " << grade_letter << endl;
    }
    else
    {
        grade_letter = "A+";
        //cout << "Grade is " << grade_letter << ", great job!" << endl;
    }
    
    return grade_letter;
}

int main()
{
    int grade_num;
    int keep_looping = 0;
    string grade_letter;
    string initialize;
    string class_name;
    int num_students;

    cout << "Welcome to Get a Letter Grade Grader" << endl;
    cout << "Press any letter to begin > ";
    cin >> initialize;
    cout << "\nClass name: ";
    cin >> class_name;
    cout << "\nNumber students: ";
    cin >> num_students;

    string student_grades[num_students];

    while (keep_looping < num_students)
    {
        string stu_name;
        cout << "\nStudent name: ";
        cin >> stu_name;
        cout << "Student grade: ";
        cin >> grade_num;

        grade_letter = getLetterGrade(grade_num);

        string name_grade = stu_name + "'s grade is " + grade_letter;

        student_grades[keep_looping] = name_grade;

        keep_looping +=1;
    }

    cout << "\n" << class_name << " class grades calculated!\n" << endl;

    for (int i=0; i <= num_students; i++)
    {
        cout << student_grades[i] << endl;
    }
}