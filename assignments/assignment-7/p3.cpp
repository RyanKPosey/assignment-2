#include <iostream>
using namespace std;
int main() {
    int prev = 0;
    int curr = 1;
    int usrInput;
    
    cout << "How many nums in the fib sequence do you want to print?: ";
    cin >> usrInput;
    cout << endl;

    for (int i = 0; i < usrInput; i++) {
        if (i == 0) {
            cout << 0 << " ";
        } else if (i == 1) {
            cout << 1 << " ";
        } else {
            cout << curr + prev << " ";
            int temp = prev;
            prev = curr;
            curr = curr + temp;
        }
    }

    cout << endl;
}