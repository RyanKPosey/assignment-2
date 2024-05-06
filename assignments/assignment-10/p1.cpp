#include <iostream>
using namespace std;

void readArr(int arr[], int arrLength) {
    cout << "Enter 9 nums: ";
    for (int i = 0; i < arrLength; i++) {
        cin >> arr[i];
    }
}

void printArr(int arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
}

void removeDuplicates(int arr[], int arrLength, int resultArr[], int& resultArrayTail) {
    for (int targetI = 0; targetI < arrLength; targetI++) {
        int pushToArr = true;

        for (int currI = 0; currI < resultArrayTail + 1; currI++) {
            if (resultArr[currI] == arr[targetI]) {
                pushToArr = false;
                break;
            }
        }

        if (pushToArr) {
            resultArr[resultArrayTail] = arr[targetI];
            resultArrayTail++;
        }

    }
}

int main() {
    int uInputArr[9];
    int resultArr[9];
    int resultArrayTail = 0;

    readArr(uInputArr, 9);

    removeDuplicates(uInputArr, 9, resultArr, resultArrayTail);

    printArr(resultArr, resultArrayTail);
    cout << endl;
}