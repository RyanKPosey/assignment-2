#include <iostream>
using namespace std;
int main () {
    float x, y;

    cout << "Enter X and Y: ";
    cin >> x, y;
    cout << endl;

    if (x >= 0 && y >= 0) {
        cout << "Quadrant I";
    } else if (x <= 0 && y >= 0) {
        cout << "Quadrant II";
    } else if (x <= 0 && y <= 0) {
        cout << "Quadrant III";
    } else if (x >= 0 && y <= 0) {
        cout << "Quadrant IIII";
    }

    cout << endl;
}