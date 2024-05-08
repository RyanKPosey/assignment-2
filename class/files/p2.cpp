#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string str;

    ofstream file("p2.txt");
    do {
        cout << "Enter text: ";
        getline(cin, str);
        cout << endl;
    } while (str != "");
    file.close();

    ifstream rFile("p2.txt");
    string iStr;
    while (!rFile.eof()) {
        getline(rFile, iStr);
        cout << "ifstream: " << iStr << endl;

    }
    rFile.close();

}