#include <iostream>
using namespace std;
void readArr(int arr[], size_t sz) {
    for (int i = 0; i < sz; i++) {
        cin >> arr[i];
    }
}

void mergeArrs(int arr1[], size_t sz1, int arr2[], size_t sz2, int arr3[], size_t sz3) {
    int i = 0;
    int a = 0;
    int b = 0;
    while (i < sz3) {
        if (a < sz1 && arr1[a] < arr2[b]) {
            arr3[i++] = arr1[a++];
        } else if (b < sz2 && arr2[b] < arr1[a]) {
            arr3[i++] = arr2[b++];
        } else {
        }
            cout << "a" << a << ": " << arr1[a];
            cout << "\nb" << b << ": " << arr2[b];

            cout << endl;
        // cout << i << "arr3: " << arr3[i] << endl;
    }
}

int main() {
    int arr[10];
    int arr2[10];
    int merged[20];
    
    readArr(arr, 10);
    readArr(arr2, 10);
    mergeArrs(arr, 10, arr2, 10, merged, 3);

    cout << "MErged: ";
    for (int i = 0; i < 20; i++ ){ 
        cout << merged[i] << " ";
    }

}