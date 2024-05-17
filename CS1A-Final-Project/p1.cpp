#include <iostream>
using namespace std;


void printTitle() {
    cout << "Welcome to the To-Do List Manager\n";
}

void displayOptions() {
    cout << "1. Add Task\n"
        << "2. Display Tasks\n"
        << "3. Remove Task\n"
        << "4. Mark Task as Completed\n"
        << "5. Exit\n";

}

void markAsCompleted(string tasks[]) {
    int taskNumber;
    cout << "Enter task number: ";
    cin >> taskNumber;

    tasks[--taskNumber] += " [completed]";
}

void displayTasks(string tasks[], int tasksLength) {
    cout << "Todo List: \n";
    for (int i = 0; i < tasksLength; i++) {
        cout << i+1 << ": " << tasks[i] << endl;
    }
}

void addTask(string tasks[], int& tasksLength) {
    string task;
    cout << "Enter task: ";
    getline(cin, task);
    tasks[tasksLength++] = task;
}

int main() {
    string tasks[] = {};
    int tasksLength = 0;

    printTitle();
    cout << endl;
    displayOptions();
    cout << endl;

    int answerChoice;
    do {
        cout << "Choose an option: ";
        cin >> answerChoice;
        cout << endl;
        cin.ignore();

    } while (answerChoice != 5);


}