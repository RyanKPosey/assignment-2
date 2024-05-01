#include <iostream>
using namespace std;

void readArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        int num = 0;
        cout << "Enter num: ";
        cin >> num;

        arr[i] = num;
    }
}

void printArr(int arr[], int length) {
    cout << "Array:\n";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }
}

void getArrayRange(int arr[], int resultArr[], int indexStart, int indexEnd) {
    for (int currI = 0, argsI = indexStart; argsI <= indexEnd; currI++, argsI++) {
        resultArr[currI] = arr[argsI];
    }
}

int main() {
    int arr[10];
    int resultArr[5];

    readArr(arr, 10);
    getArrayRange(arr, resultArr, 2, 6);
    printArr(resultArr, 5);

}