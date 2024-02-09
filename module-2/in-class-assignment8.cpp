#include <iostream>
using namespace std;
int main () {
    int x;

    cout << "Enter a number that corresponds to a day: ";
    cin >> x;

    cout << endl;

    switch(x) {
        case 1:
            cout << "It's Sunday";
            break;
        case 2:
            cout << "It's Monday";
            break;
        case 3:
            cout << "It's Tuesday";
            break;
        case 4:
            cout << "It's Wednesday";
            break;
        case 5:
            cout << "It's Thursday";
            break;
        case 6:
            cout << "It's Friday";
            break;
        case 7:
            cout << "It's Saturday";
            break;
    }
    
    cout << endl;
}