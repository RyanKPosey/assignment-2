#include <iostream>
using namespace std;
int main() {
    int monthNum;
    string month;

    cout << "Enter num for month: ";
    cin >> monthNum;
    cout << endl;

    switch (monthNum) {
        case 1:
            month = "January";
            break;
        case 2:
            month = "February";
            break;
        case 3:
            month = "March";
            break;
        case 4:
            month = "April";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "June";
            break;
        case 7:
            month = "July";
            break;
        case 8:
            month = "Agust";
            break;
        case 9:
            month = "September";
            break;
        case 10:
            month = "October";
            break;
        case 11:
            month = "November";
            break;
        case 12:
            month = "December";
            break;
        default:
            cout << "Enter a valid month\n";
            return -1;
    }

    cout << "Your month is " << month << endl;
}