#include <iostream>

using namespace std;

int main () {
    int num = 10;
    for (int i = num-1; i > 0; i--) {
        num *= i;
    }

    cout << num << endl;
}