#include <iostream>
using namespace std;

void greetUser(string username) {
    cout << "Hi " << username << endl;
}

int main () {
    string username;
    do {
        cout << "Enter username: ";
        cin >> username;
        greetUser(username);

    } while (username != "end");

}