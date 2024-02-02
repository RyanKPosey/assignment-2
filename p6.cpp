#include <iostream>

using namespace std;

int main() {
    double pi = 3.14;
    double radius;

    cout << "What is the radius of your sphere?: ";
    cin >> radius;

    double volume = 4 / 3 * pi * (radius * radius * radius);

    cout << "The volume of your sphere is: " << volume << endl;
}