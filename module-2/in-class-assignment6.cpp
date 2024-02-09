#include <iostream>
using namespace std;
int main () {
    int x, y, z;

    cout << "Enter X: ";
    cin >> x;

    cout << "\nEnter Y: ";
    cin >> y;

    cout << "\nEnter Z: ";
    cin >> z;

    cout << endl;

    if (x > y && x > z) {
        cout << "X is largest";
    } else if (y > x && y > z) {
        cout << "Y is largest";
    } else if (z > x && z > y) {
        cout << "Z is largest";
    } else {
        cout << "They're all equal";
    }

    cout << endl;
}