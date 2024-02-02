#include <iostream>

using namespace std;

int main () {
    double x;
    double y;
    double z;

    cout << "Pick a number for X: ";
    cin >> x;
    
    cout << "\nPick a number for Y: ";
    cin >> y;

    z = x;
    x = y;
    y = z;

    cout << "\nX is " << x << ", Y is " << y << endl;
    
}