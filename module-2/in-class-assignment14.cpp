#include <iostream>
using namespace std;
int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    cout << endl;

    if (year % 400 == 0) {
        cout <<"leap year";
    } else if (year % 100 == 0) {
        cout << "non leap year";
    } else if (year % 4 == 0) {
        cout << "leap year";
    } else {
        cout << "non leap year";
    }

    cout << endl;
}