#include <iostream>
#include <fstream>
using namespace std;

void readFileArr(string fn, int arr[], int arrLength) {
    ifstream f(fn);

    for (int i = 0; i < arrLength; i++) {
        f >> arr[i];
    }
}

int getMin(int arr[], int arrLength) {
    int min;
    for (int i = 0; i < arrLength; i++) {
        if (i == 0 || arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int getMax(int arr[], int arrLength) {
    int max;
    for (int i = 0; i < arrLength; i++) {
        if (i == 0 || arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[20];

    readFileArr("input_max_min.txt", arr, 20);
    cout << getMin(arr, 20);
    cout << endl << getMax(arr, 20) << endl;

}
