#include <iostream>
using namespace std;

void readArr(int arr[2][3], int rows, int columns) {
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++) {
            cin >> arr[x][y];
        }
    }
}

void readArr2(int arr[3][4], int rows, int columns) {
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++) {
            cin >> arr[x][y];
        }
    }
}

void printArr(int arr[3][4], int rows, int columns) {
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++) {
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }
}

void multiplyArrs(int arr1[2][3], int arr2[3][4], int arrResult[3][4]) {
    for (int x = 0; x < 3; x++);
        arrResult = arr1[x][k] + arr2[k][y];

        for (int y = 0; y < 4; y++) {

        }
}

int main() {
    int arr1[2][3];
    int arr2[3][4];
    
    int arrResult[3][4];

    readArr(arr1, 2, 3);
    cout << endl;
    readArr2(arr2, 3, 4);
    cout << endl;

    multiplyArrs(arr1, arr2, arrResult);

    printArr(arrResult, 3, 4);
}
