#include <iostream>
using namespace std;
int main () {
    float hour;

    cout << "Enter hour: ";
    cin>> hour;
    cout << endl;

    if (hour > 21) {
        cout << "Night time";
    } else if (hour > 18) {
        cout << "Evening";
    } else if (hour >= 13) {
        cout << "Afternoon";
    } else if (hour >= 12) {
        cout << "Noon";
    } else {
        cout << "Morning";
    }

    cout << endl;
}