#include <iostream>
using namespace std;

void readArr(int arr[], int arrLength) {
    cout << "Enter 5 nums: ";
    for (int i = 0; i < arrLength; i++) {
        cin >> arr[i];
    }
}

void printArr(int arr[], int arrLength) {
    cout << "Common elements: ";
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
}

void getIntersections(int arr1[], int arr1Length, int arr2[], int arr2Length, int arrResult[], int& arrResultTail) {
    /*
        * I'm not sure if I'm supposed to check if arr2 includes arr1[i] at any index,
        * or if they have to be at the same index.
    */

    for (int i = 0; i < arr1Length; i++) {
        for (int i2 = 0; i2 < arr2Length; i2++) {
            if (arr1[i] == arr2[i2]) {
                arrResult[arrResultTail] = arr1[i];
                arrResultTail++;
            }
        }
    }
}

int main() {
    int arr1[5];
    int arr2[5];
    int arrResult[5];
    int arrResultTail = 0;

    readArr(arr1, 5);
    readArr(arr2, 5);

    getIntersections(arr1, 5, arr2, 5, arrResult, arrResultTail);

    printArr(arrResult, arrResultTail);

    cout << endl;
}