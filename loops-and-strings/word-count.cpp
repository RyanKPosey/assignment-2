#include <iostream>
using namespace std;
int main() {
    int words = 1;
    string sentence;

    cout << "Enter string: ";
    getline(cin, sentence);

    cout << endl;

    for (int i = 0; i <= sentence.length(); i++) {
        if (sentence[i-1] == ' ' && sentence[i] != ' ') {
            words++;
        }
    }
    cout << words << endl;
}