#include <iostream>
using namespace std;

int main() {
    int n;
    string UPPERCASE_ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    cout << "Enter n: ";
    cin >> n;
    
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        for (int i2 = 0; i2 <= i; i2++) {
            cout << UPPERCASE_ALPHABET[i];
        }
        
        cout << endl;
    }
}