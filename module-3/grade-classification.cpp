#include <iostream>
using namespace std;
int main () {
    int score;
    char grade;

    cout << "Enter score: ";
    cin >> score;
    cout << endl;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else {
        grade = 'D';
    }

    cout << "Your grade is " << grade << endl;
}