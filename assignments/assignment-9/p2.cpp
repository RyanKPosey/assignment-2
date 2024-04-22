#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int i2 = 1; i2 <= i; i2++) {
            cout << i2;
        }

        for (int i2 = i-1; i2 > 0; i2--) {
            cout << i2;
        }

        cout << endl;
    }
}