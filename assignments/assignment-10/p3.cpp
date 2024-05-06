#include <iostream>
using namespace std;

void readArr(int arr[], int arrLength) {
    cout << "Enter 7 nums: ";
    for (int i = 0; i < arrLength; i++) {
        cin >> arr[i];
    }
}

void printArr(int arr[], int arrLength) {
    cout << "Shifted Array: ";
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
}

void shiftArr(int offset, int arr[], int arrLength) {
    for (int i = 0; i < offset; i++) {
        int head = arr[0];
        int next = arr[arrLength - 1];
        arr[arrLength - 1] = head;

        for (int i2 = arrLength - 1; i2 > 0; i2--) {
            int temp = arr[i2 - 1];
            arr[i2 - 1] = next;
            next = temp;
        }
    }
}

int main() {
    int arr[7];
    int offset;


    readArr(arr, 7);

    cout << "Enter offset: ";
    cin >> offset;
    shiftArr(offset, arr, 7);

    printArr(arr, 7);

    cout << endl;
}