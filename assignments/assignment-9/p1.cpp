#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << endl;

    int currNum = 1;
    for (int i = 0; i <= n; i++) {
        for (int i2 = 0; i2 < i; i2++) {
            cout << currNum++ << " ";
        }

        cout << endl;
    }
}