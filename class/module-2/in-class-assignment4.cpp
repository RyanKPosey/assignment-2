#include <iostream>
using namespace std;
int main () {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << endl;

    if (x > 10) {
        cout << "Your number is greater than 10";
    } else if (x < 10) {
        cout << "Your number is less than 10";
    } else {
        cout << "Your number is 10";
    }
    
    cout << endl;
}