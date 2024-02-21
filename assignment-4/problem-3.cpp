#include <iostream>
using namespace std;
int main() {
    int dayNum;
    bool isWeekend;

    cout << "Enter a number that corresponds to a day: ";
    cin >> dayNum;
    cout << endl;

    dayNum %= 7;

    if (dayNum == 0 || dayNum == 6) {
        cout << "It's a weekend!";
    } else {
        cout << "It's not a weekend...";
    }

    cout << endl;
}