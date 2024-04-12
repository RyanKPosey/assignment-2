#include <iostream>
using namespace std;
int main() {
    int num;
    string numSign;
    string evenOrOdd;

    cout << "Enter an integer: ";
    cin >> num;

    cout << endl;

    if (num > 0) {
        numSign = "positive";
    } else if (num < 0) {
        numSign = "negative";
    } else {
        cout << "Your number is 0\n";
        return 0;
    }

    if (num % 2 == 0) {
        evenOrOdd = "even";
    } else {
        evenOrOdd = "odd";
    }

    cout << "Your number is " << numSign << " and " << evenOrOdd << endl;
}