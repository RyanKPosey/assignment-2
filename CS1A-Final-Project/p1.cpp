#include <iostream>
using namespace std;


void displayTitle() {
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

void removeTask(string tasks[], int& tasksLength) {
    int taskNumber;
    cout << "Enter task number: ";
    cin >> taskNumber;
    cout << endl;

    int taskIndex = taskNumber - 1;

    string next = tasks[tasksLength - 1];

    for (int i = tasksLength - 1; i >= taskIndex; i--) {
        string temp = tasks[i];
        tasks[i] = next;
        next = temp;
    }

    tasksLength--;
}

int main() {
    string tasks[100];
    int tasksLength = 0;

    displayTitle();
    cout << endl;
    displayOptions();
    cout << endl;

    int answerChoice;
    do {
        cout << "Choose an option: ";
        cin >> answerChoice;
        cout << endl;
        cin.ignore();

        switch(answerChoice) {
            case 1:
                addTask(tasks, tasksLength);
                break;
            case 2:
                displayTasks(tasks, tasksLength);
                break;
            case 3:
                removeTask(tasks, tasksLength);
                break;
            case 4:
                markAsCompleted(tasks);
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "That isn't an option!\n";
                break;
        }
    } while (answerChoice != 5);


}