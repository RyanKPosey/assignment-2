#include <iostream>
using namespace std;
int main () {
    int x;
    cout << "Enter a number that corresponds to a day: ";
    cin >> x;

    cout << endl;

    x %= 7;
    if (x == 1) {
        cout << "It's Sunday";
    } else if (x == 2) {
        cout << "It's Monday";
    } else if (x == 3) {
        cout << "It's Tuesday";
    } else if (x == 4) {
        cout << "It's Wednesday";
    } else if (x == 5) {
        cout << "It's Thurdsday";
    } else if (x == 6) {
        cout << "It's Friday";
    } else if (x == 0) {
        cout << "It's Saturday";
    }
    // cout << x == 1 ? 
    //     "It's Sunday" :
        

    // switch(x) {
    //     case 1:
    //         cout << "It's Sunday";
    //         break;
    //     case 2:
    //         cout << "It's Monday";
    //         break;
    //     case 3:
    //         cout << "It's Tuesday";
    //         break;
    //     case 4:
    //         cout << "It's Wednesday";
    //         break;
    //     case 5:
    //         cout << "It's Thursday";
    //         break;
    //     case 6:
    //         cout << "It's Friday";
    //         break;
    //     case 7:
    //         cout << "It's Saturday";
    //         break;
    // }
    
    cout << endl;
}