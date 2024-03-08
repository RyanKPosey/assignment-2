#include <iostream>

using namespace std;

int main() {
    float totalPrice = 0;
    string continueScanning = "Y";
    float currentItemPrice = 0;

    for (; continueScanning == "Y";) {
        cout << "Enter the price of your item: ";
        cin >> currentItemPrice;

        cout << endl;

        totalPrice += currentItemPrice;

        cout << "Would you like to continue scanning? (Y/N): ";
        cin >> continueScanning;

        cout << endl;
    }

    cout << "Your total is $" << totalPrice << endl;
}