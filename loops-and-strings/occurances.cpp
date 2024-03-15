#include <iostream>
using namespace std;
int main()  {
    string str_userInput;
    char char_userInput;
    int numOfOccurances = 0;

    cout << "Enter a string: ";
    getline(cin, str_userInput);

    cout << "\nEnter a character: ";
    cin >> char_userInput;

    cout << endl;

    for (int i = 0; i < sizeof(str_userInput); i++) {
        if (str_userInput[i] == char_userInput) {
            numOfOccurances++;
        }
    }

    cout << "There are " << numOfOccurances << " " << char_userInput << "'s in " << "\"" << str_userInput << "\"\n";
}