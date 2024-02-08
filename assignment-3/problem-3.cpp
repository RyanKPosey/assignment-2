#include <iostream>
using namespace std;
int main () {
    float x, y, z, avg;

    cout << "Enter a number for X: ";
    cin >> x;

    cout << "\nEnter a number for Y: ";
    cin >> y;

    cout << "\nEnter a number for Z: ";
    cin >> z;

    avg = (x + y + z) / 3;
    
    cout << "\nThe average of your 3 numbers is: " << avg << endl;
}