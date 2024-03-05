#include <iostream>
using namespace std;
int main() {
    string shape;
    string calcType;
    float calcLenX;
    float calcLenY;
    double result;

    cout << "Do you want to calculate a square, triangle, or circle?: ";
    cin >> shape;
    
    cout << "\nDo you want to calculate the perimeter or area of the " << shape << "?: ";
    cin >> calcType;
    
    cout << endl;

    if (shape == "square") {
        cout << "Enter side length: ";
        cin >> calcLenX;
        if (calcType == "perimeter") {
            result = calcLenX * 4;
        } else if (calcType == "area") {
            result = calcLenX * calcLenX;
        } else {
            cout << "\nEnter a valid calculation type\n";
            return -1;
        }
    } else if (shape == "triangle") {
        cout << "Enter base length: ";
        cin >> calcLenX;
        
        if (calcType == "perimeter") {
            result = calcLenX + calcLenX + calcLenX;
            // assuming all sides are equal
        } else if (calcType == "area") {
            cout << "\nEnter height length: ";
            cin >> calcLenY;

            result = calcLenX * calcLenY / 2.0;
        } else {
            cout << "\nEnter a valid calculation type\n";
            return -1;
        }
    } else if (shape == "circle") {
        cout << "Enter radius length: ";
        cin >> calcLenX;
        
        if (calcType == "perimeter") {
            result = 2.0 * 3.14 * calcLenX;
            // assuming all sides are equal
        } else if (calcType == "area") {
            result = 3.14 * calcLenX * calcLenX;
        } else {
            cout << "\nEnter a valid calculation type\n";
            return -1;
        }
    } else {
        cout << "Enter a valid shape\n";
        return -1;
    }

    cout << "\nThe " << calcType << " of your " << shape << " is " << result << endl;
}