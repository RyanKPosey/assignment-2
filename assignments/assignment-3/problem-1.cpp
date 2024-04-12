#include <iostream>
using namespace std;
int main () {
    double x, y, area;

    cout << "Enter a number for the base of the triangle: ";
    cin >> x;

    cout << "\nEnter a number for the height of the triangle: ";
    cin >> y;

    area = (x * y) / 2;
    cout << "\nThe area of your triangle is " << area << endl;
}