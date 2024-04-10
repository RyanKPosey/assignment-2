#include <iostream>

using namespace std;

int main() {
    string password = "password";\
    string usrPassword;

    cout << "Enter your password: ";
    cin >> usrPassword;
    
    cout << endl;

    for (; usrPassword != password;) {
        cout << "Incorrect password, try again\n";
        cout << "Password: ";
        cin >> usrPassword;
        cout << endl;
    }

    cout << "Correct, you're in.\n";
}