// TextPrinter.cpp
#include "TextPrinter.h"
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void print_with_delay(const string& text, int delay_milliseconds) {
    for (char c : text) {
        cout << c;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(delay_milliseconds));
    }
    cout << endl;
}
