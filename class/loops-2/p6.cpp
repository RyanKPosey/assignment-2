#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int i2 = 0; i2 < i; i2++) {
            cout << i;
        }
        cout << endl;
    }
}