#include <iostream>
using namespace std;
int main () {
    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << "\nYour number is ";
    if (x % 2) {
        cout << "odd";
    } else {
        cout << "even";
    }
    
    cout << endl;
}