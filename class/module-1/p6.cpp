#include <iostream>

using namespace std;

int main() {
    double pi = 3.14;
    double radius;

    cout << "What is the radius of your sphere?: ";
    cin >> radius;

    // first value of fraction must be decimal num
    double volume = 4.0 / 3 * pi * (radius * radius * radius);

    cout << "The volume of your sphere is: " << volume << endl;
}