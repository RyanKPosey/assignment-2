#include <iostream>
using namespace std;
int main() {
    int score;
    char grade;

    cout << "Enter score";
    cin >> score;
    cout << endl;

    switch (score) {
        case 90 ... 100:
            grade = 'A';
            break;
        case 80 ... 89:
            grade = 'B';
            break;
        case 70 ... 89:
            grade = 'C';
            break;
        case 60 ... 
    }

    cout << "You gotta " << grade << endl;
}