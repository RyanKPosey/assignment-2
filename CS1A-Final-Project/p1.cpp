#include <iostream>
using namespace std;


void printTitle() {
    cout << "Welcome to the To-Do List Manager";
}

void markAsCompleted(string& task) {
    task += " [completed]";
}
