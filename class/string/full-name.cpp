#include <iostream>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);
    cin.ignore();

    cout << endl << fullName << endl;
}