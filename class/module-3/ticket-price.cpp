#include <iostream>
using namespace std;
int main () {
    int age;
    float ticketPrice;

    cout << "Enter age: ";
    cin >> age;

    if (age < 13) {
        ticketPrice = 5;
    } else if (age < 19) {
        ticketPrice = 8;
    } else if (age < 65) {
        ticketPrice = 12;
    } else {
        ticketPrice = 6;
    }

    cout << "Price of your ticket is $" << ticketPrice << endl;
}