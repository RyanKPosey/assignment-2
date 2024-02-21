#include <iostream>
using namespace std;
int main () {
    int age;

    cout << "Enter your age: ";
    cin >> age;
    cout << endl;
    
    if (age >= 65) {
        cout << "You're a senior";
    } else if (age >= 20) {
        cout << "You're an adult";
    } else if (age >= 13) {
        cout << "You're a teenager";
    } else {
        cout << "You're a child";
    } 

    cout << endl;
}