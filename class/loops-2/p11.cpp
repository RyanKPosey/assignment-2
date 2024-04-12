#include <iostream>
using namespace std;

int main() {
    string nums = "";
    cout << "Enter a string of numbers: ";
    getline(cin, nums);

    cout << endl;

    string result = "";

    for (int i = 0; i < nums.length(); i++) {
        bool recordNum = true;
        for (int i2 = i+1; i2 < nums.length(); i2++) {
            if (nums[i2] < nums[i]) {
                recordNum = false;
                break;
            }
        }
        if (recordNum) {
            result += nums[i];
        }
    }

    cout << result << endl;
}