#include <iostream>
using namespace std;
int main () {
    float angle1, angle2, angle3;

    cout << "Enter 3 angles: ";
    cin >> angle1, angle2, angle3;
    cout << endl;

    if (angle1 + angle2 + angle3 != 180 || angle1 <= 0 || angle2 <= 0 || angle3 <=0) {
        cout << "Invalid triangle";
    } else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        cout << "It's a right triangle";
    } else if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
        cout << "It's an obtus triangle";
    } else if (angle1 < 90 && angle2 < 90 && angle3 < 90) {
        cout << "It's an acute triangle";
    }
    
    cout << endl;
}