#include <iostream>

using namespace std;

int main() {
    const int num = 123;
    int result = 0;
    int temp;

    for (int i = num; i > 0; i/=10) {
        temp = num - num / i;
        cout << temp << endl;
    }
}