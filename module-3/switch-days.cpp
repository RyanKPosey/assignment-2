#include <iostream>
using namespace std;
int main() {
    int dayNum = 0;

    cout << "Enter day number: ";
    cin >> dayNum;

    dayNum %= 7;

    switch (dayNum) {
        case 0:
            cout << "Saturday";
            break;
        case 1: 
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3: 
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        default:
            cout << "Saturday";
            break;
    }
    
    cout << endl;
}