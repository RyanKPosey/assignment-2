#include <iostream>
using namespace std;
int main() {
    int prev;
    int curr;
    bool ascending = true;
    bool descending = true;
    
    for (int i = 0; i < 10; i++) {
        cout << "Enter a num: ";
        cin >> curr;
        cout << endl;
        if (i == 0) {
            prev = curr;
        }

        if (curr > prev) {
            descending = false;
        }

        if (curr < prev) {
            ascending = false;
        }
        
        prev = curr;
    }

    cout << "Your numbers are " << ((ascending) ? "ascending" : (descending) ? "descending" : "shuffled") << endl;
}