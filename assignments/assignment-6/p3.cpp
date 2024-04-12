#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int userInput;

    for(int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> userInput;

        cout << endl;

        if (userInput > 0) {
            sum += userInput;
        }
    }

    cout << "The sum of the positive numbers you entered is " << sum << endl;
}