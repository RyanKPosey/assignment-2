#include <iostream>
using namespace std;

void sortArr(int arr[], int arrLength) {
    int currentIndex = 0;
    for (int i = currentIndex; i < arrLength; i++) {
        int min;
        int minIndex;
        for (int j = i; j < arrLength; j++) {
            if (j == i || arr[j] < min) {
                min = arr[j];
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = min;
        arr[minIndex] = temp;

        currentIndex++;
    }
}

int main() {
    int arr[] = {0, 2, 1, 5, 6, 3, 9, 4};
    sortArr(arr, 8);
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}