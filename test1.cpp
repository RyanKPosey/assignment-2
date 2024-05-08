#include <iostream>
using namespace std;
int getNumsAboveAvg(int arr[], int arrLength) {
    int acc = 0;
    for (int i = 0; i < arrLength; i++) {
        acc += arr[i];
    }
    float avg = (double)acc / arrLength;
    cout << "Avg: " << avg << endl;
    int nums = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] > avg) {
            nums++;
        }
    }

    return nums;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << getNumsAboveAvg(arr, 10);
}