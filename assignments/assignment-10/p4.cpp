#include <iostream>
using namespace std;

void readArr(int arr[], int arrLength) {
    cout << "Enter 8 nums: ";
    for (int i = 0; i < arrLength; i++) {
        cin >> arr[i];
    }
}

void printArr(int arr[8][2], int arrLength) {
    cout << "Frequencies:\n";
    for (int i = 0; i < arrLength; i++) {
        cout << "Number: " << arr[i][0] << " Frequency: " << arr[i][1] << endl;
    }
}

int find(int target, int arr[8][2], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i][0] == target) {
            return i;
        }
    }

    return -1;
}

void checkFrequencies(int arr[], int arrLength, int resultArr[8][2], int& resultTail) {
    for (int i = 0; i < arrLength; i++) {
        int target = arr[i];

        int targetIndexInResult = find(target, resultArr, resultTail);

        if (targetIndexInResult == -1) {
            resultArr[resultTail][0] = target;
            resultArr[resultTail][1] = 1;
            resultTail++;
        } else {
            resultArr[targetIndexInResult][1] += 1;
        }
    }
}

int main() {
    int arr[8];
    int resultArr[8][2];
    int resultTail = 0;

    readArr(arr, 8);
    checkFrequencies(arr, 8, resultArr, resultTail);
    printArr(resultArr, resultTail);
}





