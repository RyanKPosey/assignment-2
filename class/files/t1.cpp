#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile("./my-file.txt");
    outputFile << "Hello World!";
    outputFile.close();

    ifstream readFile("./my-file.txt");
    string str;
    while (!readFile.eof()) {
        getline(readFile, str);

    }

    cout << str << endl;
}