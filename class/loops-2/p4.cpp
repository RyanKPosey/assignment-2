#include <iostream>
using namespace std;
int main() {
    char currentChar = 'X';
    int n, m;

    cout << "Enter n and m: ";
    cin >> n >> m;
    cout << endl;

    for (int i = 0; i < n; i++) {
        currentChar = i % 2 == 0 ? 'X' : 'O';
        for (int i2 = 0; i2 < m; i2++) {
            cout << currentChar;
            currentChar = currentChar == 'X' ? 'O' : 'X';
        }
        cout << endl;
    }
}