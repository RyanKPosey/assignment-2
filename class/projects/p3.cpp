#include <iostream>
#include <fstream>
using namespace std;

void readFileArray(string fn, int arr[], int arrLength) {
    ifstream f(fn);
    for (int i = 0; i < arrLength; i++) {
        f >> arr[i];
    }
}

void reverseArray(int arr[], int arrLength) {
    for (int low = 0, high = arrLength - 1; low < (arrLength / 2); low++, high++) {
        int temp = arr[high];
        arr[high] = arr[low];
        arr[low] = temp;
    }
}
int main() {
    int arr[10];
    readFileArray("input_reverse.txt", arr, 10);
    

}