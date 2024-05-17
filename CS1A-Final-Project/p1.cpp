#include <iostream>
using namespace std;


void printTitle() {
    cout << "Welcome to the To-Do List Manager\n";
}

void markAsCompleted(string& task) {
    task += " [completed]";
}

void displayTasks(string tasks[], int tasksLength) {
    cout << "Todo List: \n";
    for (int i = 0; i < tasksLength; i++) {
        cout << i+1 << ": " << tasks[i] << endl;
    }
}

int main() {
    string tasks[] = {};
    int tasksLength = 0;


}