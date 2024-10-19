#include <iostream>
using namespace std;

int equilibriumIndex(int* nums, int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum -= nums[i];
        if (leftSum == totalSum) {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    int size;
    cin >> size;
    int* nums = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    cout << equilibriumIndex(nums, size) << endl;
}
