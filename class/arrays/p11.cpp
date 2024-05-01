#include <iostream>
#include <vector>
using namespace std;

std::vector<int> mergeArrs(int arr1[4], int arr2[4]) {
    std::vector<int> result = {};
    for (int i = 0; i < 4; i++) {
        result.push_back(arr1[i]);
    }
    for (int i = 0; i < 4; i++) {

        result.push_back(arr2[i]);
    }

    return result;
}

int main() {
    int x[] = {1, 2, 3, 4};
    int y[] ={4, 3, 2, 1};

    std::vector<int> result = mergeArrs(x, y);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }


}