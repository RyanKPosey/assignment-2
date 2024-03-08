#include <iostream>
using namespace std;
int main () {
    int calcOption;
    float calcNumX;
    float calcNumY;
    float result;
    string calcContinue = "Y";

    for(; calcContinue == "Y";) {
        cout << "(1) Addition\n(2) Subtraction\n";
        cout << "(3) Multiplication\n" "(4) Division\n";
        cout << "Enter what you want to calculate!: ";
        cin >> calcOption;

        cout << "\nEnter a number for X: ";
        cin >> calcNumX;

        cout << "\nEnter a number for Y: ";
        cin >> calcNumY;
        cout << endl;

        switch (calcOption) {
            case 1:
                result = calcNumX + calcNumY;
                break;
            case 2:
                result = calcNumX - calcNumY;
                break;
            case 3:
                result = calcNumX * calcNumY;
                break;
            case 4:
                if (calcNumX == 0 || calcNumY == 0) {
                    cout << "Nice try... you can't divide by zero\n";
                    return -1;
                }

                result = calcNumX / calcNumY;
                break;
            default:
                cout << "Enter a valid menu item\n";
                return -1;
        }

        cout << "The result of your calculation is " << result << endl;

        cout << "Would you like to calculate something else? (Y/N): ";
        cin >> calcContinue;

        cout << endl;
    }
}