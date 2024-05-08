#include <iostream>
using namespace std;

void readArr(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        int num;

        cout << "Enter num: ";
        cin >> num;
        cout << endl;

        arr[i] = num;
    }
}

int calculateSum(int arr[], int length) {
    int result = 0;
    for (int i = 0; i < length; i++) {
        result += arr[i];
    }

    return result;
}

int calculateAverage(int arr[], int length) {
    float result = 0.0;
    for (int i = 0; i < length; i++) {
        result += arr[i];
    }

    cout << "REsult" << result << endl;
    result /= length;

    return result;
}

int main() {
    int arr[5];
    readArr(arr, 5);

    cout << calculateSum(arr, 5) << endl;
    cout << calculateAverage(arr, 5) << endl;
}