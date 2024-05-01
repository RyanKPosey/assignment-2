#include <iostream>
using namespace std;

void read2DArray(int arr[4][4], int length) {
    for (int i = 0; i < length; i++) {
        for (int i2 = 0; i2 < length; i2++) {
            int num = 0;

            cout << "Enter num: ";
            cin >> num;
            cout << endl;

            arr[i][i2] = num;
        }
    }
}

void printDiagonal(int arr[4][4], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i][i] << endl;
    }
}

int main() {
    int arr[4][4];

    read2DArray(arr, 4);

    printDiagonal(arr, 4);
}