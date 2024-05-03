#include <iostream>
using namespace std;

void readArr(int arr[2][3]) {
    cout << "Enter 2x3 array: \n";
    for (int i = 0; i < 2; i++) {
        for (int i2 = 0; i2 < 3; i2++) {
            cin >> arr[i][i2];
        }
    }
}

void addArrays(int arr1[2][3], int arr2[2][3], int resultArr[2][3]) {
    for (int i = 0; i < 2; i++) {
        for (int i2 = 0; i2 < 3; i2++) {
            resultArr[i][i2] = arr1[i][i2] + arr2[i][i2];
        }
    }
}

int main () {
    int arr1[2][3];
    int arr2[2][3];
    
    int resultArr[2][3];

    readArr(arr1);
    readArr(arr2);

    addArrays(arr1, arr2, resultArr);

    for (int i = 0; i < 2; i++) {
        for (int i2 = 0; i2 < 3; i2++) {
            cout << resultArr[i][i2] << " ";
        }
        cout << endl;
    }
}