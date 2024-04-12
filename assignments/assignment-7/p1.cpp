#include <iostream>
using namespace std;
int main() {
    int inputN;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> inputN;
    cout << endl;

    for (int i = 2; i < inputN; i++) {
        if (!(inputN % i)) {
            isPrime = false;
            break;
        }
    }

    cout << "Your number is " << (isPrime ? "prime" : "not prime") << endl;
}