#include <iostream>

using namespace std;

int main() {
    int result;

    for(int i = 0; i <= 50; i+=2) {
        result += i;
    }

    cout << result << endl;
}