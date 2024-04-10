#include <iostream>
using namespace std;
int main() {
    int monthNum;
    int daysInMonth;
    string month;

    cout << "Enter num for month: ";
    cin >> monthNum;
    cout << endl;

    switch (monthNum) {
        case 2:
            daysInMonth = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    cout << "This month has " << daysInMonth << " days" << endl;
}