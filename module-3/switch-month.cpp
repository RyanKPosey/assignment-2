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
        case 1:
            month = "January";
            daysInMonth = 31;
            break;
        case 2:
            month = "February";
            daysInMonth = 28;
            break;
        case 3:
            month = "March";
            daysInMonth = 31;
            break;
        case 4:
            month = "April";
            daysInMonth = 30;
            break;
        case 5:
            month = "May";
            daysInMonth = 31;
            break;
        case 6:
            month = "June";
            daysInMonth = 30;
            break;
        case 7:
            month = "July";
            daysInMonth = 31;
            break;
        case 8:
            month = "August";
            daysInMonth = 31;
            break;
        case 9:
            month = "September";
            daysInMonth = 30;
            break;
        case 10:
            month = "October";
            daysInMonth = 31;
            break;
        case 11:
            month = "November";
            daysInMonth = 30;
            break;
        case 12:
            month = "December";
            daysInMonth = 31;
            break;
    }

    cout << "It's " << month << endl;
}