#include <iostream>

using namespace std;

int main () {
    double temp;
    cout << "What is your temperature in Fahrenheit?: ";
    cin >> temp;

    temp = 5 / 9 * (temp-32);

    cout << "\nThe temperature in Celsius is: " << temp << endl;
}