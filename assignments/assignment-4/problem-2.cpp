#include <iostream>
using namespace std;
int main () {
    int unitsConsumed;
    float firstHundredRate = 0.12;
    float afterHundredRate = 0.15;
    float electricityBill = 0;

    cout << "How many units of electricity have you consumed?: ";
    cin >> unitsConsumed;
    cout << endl;

    cout << "Your electricity bill is $";

    if (unitsConsumed > 100) {
        electricityBill += 100 * firstHundredRate;
        unitsConsumed -= 100;
        electricityBill += unitsConsumed * afterHundredRate;
    } else {
        electricityBill = unitsConsumed * firstHundredRate;
    }

   

    cout << electricityBill << endl;

}