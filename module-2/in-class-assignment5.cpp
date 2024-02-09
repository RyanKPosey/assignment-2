#include <iostream>
using namespace std;
int main () {
    char vowels[] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    char input;
    char vowel = false;

    cout << "Enter a character: ";
    cin >> input;

    for (int i = 0; i << sizeof(vowels); i++) {
        if (input == vowels[i]) {
            vowel = true;
        }
    }

    cout << endl << vowel << endl << true;
}