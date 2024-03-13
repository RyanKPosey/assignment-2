#include <iostream>
using namespace std;
int main() {
    int divBy3 = 0;
    int divBy5 = 0;
    int userInput;

    for (int i = 0; i < 20; i++) {

        cout << "Enter a number: ";
        cin >> userInput;

        cout << endl;

        if (userInput % 3 == 0) {
            divBy3++;
        }

        if (userInput % 5 == 0) {
            divBy5++;
        }
    }

    cout << "There are " << divBy3 << " numbers divisible by 3\n";
    cout << "There are " << divBy5 << " numbers divisible by 5\n";

}