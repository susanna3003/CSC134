#include <iostream>
using namespace std;

// CSC 134
// m6t1 - counting cars
// Susanna Quayle
// 12/6/24

void count_with_loop();
void loop_and_array();

int main() {
    cout << "Part 1: Without arrays" << endl;
    count_with_loop();

    cout << "\nPart 2: With arrays and ASCII bar chart" << endl;
    loop_and_array();
}

void count_with_loop() {
    int total_cars = 0;
    int cars_per_day;

    for (int day = 1; day <= 5; day++) {
        cout << "Enter the number of cars that passed on day " << day << ": ";
        cin >> cars_per_day;
        total_cars += cars_per_day;
    }

    int average_cars_per_day = total_cars / 5;

    cout << "Total cars that passed in 5 days: " << total_cars << endl;
    cout << "Average cars per day: " << average_cars_per_day << endl;
}

void loop_and_array() {
    int cars[5] = {0};
    int total_cars = 0;

    for (int day = 0; day < 5; day++) {
        cout << "Enter the number of cars that passed on day " << day + 1 << ": ";
        cin >> cars[day];
        total_cars += cars[day];
    }

    int average_cars_per_day = total_cars / 5;

    cout << "Total cars that passed in 5 days: " << total_cars << endl;
    cout << "Average cars per day: " << average_cars_per_day << endl;

    cout << "Day\tCars Passed\tChart" << endl;
    for (int day = 0; day < 5; day++) {
        cout << day + 1 << "\t" << cars[day] << "\t\t";
        for (int i = 0; i < cars[day]; i++) {
            cout << "|";
        }
        cout << endl;
    }
}