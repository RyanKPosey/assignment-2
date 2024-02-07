#include <iostream>
using namespace std;
int main () {
    double item;
    cout << "What is the price of your item?: ";
    cin >> item;
    double total = item * 1.09;
    cout << endl << "Your total is $" << total << endl;
}