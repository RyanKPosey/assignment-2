#include <iostream>
using namespace std;

int main () {
    int x, y;

    cout << "Enter a number for X: ";
    cin >> x;

    cout << "\nEnter a number for Y: ";
    cin >> y;
    
    cout << "\nThe larger number is: ";
    if (x > y) {
        cout << "X";
    } else if (x < y) {
        cout << "Y";
    } else {
        cout << "none";
    }

    cout << endl;
}