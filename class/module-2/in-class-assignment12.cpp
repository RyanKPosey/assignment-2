#include <iostream>
using namespace std;
int main() {
    int item;
    float price;

    cout << "Enter the item you wanna buy (1-5): ";
    cin >> item;

    switch (item) {
        case 1:
            price = 10;
            break;
        case 2:
            price = 20;
            break;
        case 3:
            price = 20;
            break;
        case 4:
            price = 25;
            break;
        case 5:
            price = 39;
            break;
    }

    cout << "\nPrice is $" << price << endl;
}