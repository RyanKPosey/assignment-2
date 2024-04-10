#include <iostream>
using namespace std;
int main() {
    int n = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int i2 = 1; i2 <= n; i2++) {
            cout << i << 'x' << i2 << '=' << (i*i2) << ' ';
        }
        cout << endl;
    }
}