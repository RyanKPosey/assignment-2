#include <iostream>
using namespace std;

void printNumsUpTo(unsigned int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}

int main() {
    printNumsUpTo(4);
}