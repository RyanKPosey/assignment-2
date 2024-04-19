#include <iostream>
using namespace std;

double getRectangleArea(double length, double width) {
    return length * width;
}

int main() {
    cout << getRectangleArea(4, 4) << endl;
}