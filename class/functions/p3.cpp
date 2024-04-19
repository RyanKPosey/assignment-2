#include <iostream>
using namespace std;

double getSum(double arg1, double arg2) {
    return arg1 + arg2;
}

int main() {
    cout << getSum(1, 3) << endl;
    cout << getSum(4, 4) << endl;
    cout << getSum(5, 5) << endl;

}