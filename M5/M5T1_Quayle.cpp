#include <iostream>
#include <cstdlib>
using namespace std;

// CSC 134
// M5T1 - void functions
// Susanna Quayle
// 10/30/2024

// declarations

void say_hello();
int give_the_answer();
int double_the_number(int num);

int main()
{
    cout << "Hello World from the main function!" << endl;
    say_hello();
    int answer = give_the_answer();
    cout << "The answer is " << answer << "!" << endl;
    // doubling answer
    int doubled_answer = double_the_number(answer);
    cout << "And here is the answer doubled: " << doubled_answer << "!" << endl;
}

void say_hello()
{
    cout << "\nHello! I am greeting you from the say_hello() function!" << endl;
    return;
}

int give_the_answer()
{
    return 42;
}

int double_the_number(int num)
{
    return num*2;
}
