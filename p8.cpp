#include <iostream>

using namespace std;

int main () {
    double x;
    double y;

    cout << "Pick a number for X: ";
    cin >> x;
    
    cout << "\nPick a number for Y: ";
    cin >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "\nX is " << x << ", Y is " << y << endl;
    
}