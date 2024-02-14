#include <iostream>
using namespace std;
int main () {
    int month;
    int numOfDays;

    cout << "Enter a number that corresponds to a month: ";
    cin >> month;

    month %= 12;

    if (month == 2) {
        numOfDays = 28;
    } else if (month == 11 || month == 4 || month == 6 || month == 9) {
        numOfDays = 30;
    } else {
        numOfDays = 31;
    }

    cout << "\nThere are " << numOfDays << " days in your month\n";

}