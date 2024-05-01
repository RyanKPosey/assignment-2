#include <iostream>
using namespace std;

void read2DArray(int arr[4][5], int length1, int length2) {
    for (int i = 0; i < length1; i++) {
        for (int i2 = 0; i2 < length2; i2++) {
            int num = 0;

            cout << "Enter num: ";
            cin >> num;
            cout << endl;

            arr[i][i2] = num;
        }
    }
}

void printArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << endl;
    }
}

void getSums(int arr[4][5], int length1, int length2, int sums[]) {
    for (int i = 0; i < length1; i++) {
        int result = 0;
        for (int i2 = 0; i2 < length2; i2++) {
            result += arr[i][i2];
        }

        sums[i] = result / length2;
    }
}

int main() {
    int arr[4][5];

    read2DArray(arr, 4, 5);

    int sums[4];
    getSums(arr, 4, 5, sums);
    printArr(sums, 4);
}