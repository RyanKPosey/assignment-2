#include <iostream>
using namespace std;

double fahrenheitToCelsius(double tempF) {
    return (tempF - 32) * 5.0/9;
}

double celsiusToFahrenheit(double tempC) {
    return (tempC * 9.0/5) + 32;
}

int main() {
    cout << fahrenheitToCelsius(42) << endl;
    cout << celsiusToFahrenheit(42) << endl;
}