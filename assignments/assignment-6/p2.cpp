#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int userInput;

    for (int i = 0; i < 6; i++) {
        cout << "Enter a number: ";
        cin >> userInput;

        cout << endl;

        if (userInput < 0) {
            userInput *= -1;
        }
        
        sum += userInput;
    }

    cout << "The sum of the absolute values of all the numbers you entered is " << sum << endl;
}