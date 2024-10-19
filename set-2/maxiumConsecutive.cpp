#include <iostream>
using namespace std;

void maxInKSizeWindow(int* nums, int size, int k) {
    if (k > size) return;

    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += nums[i];
    }

    int maxSum = currentSum;

    for (int i = k; i < size; i++) {
        currentSum += nums[i] - nums[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    cout << maxSum << endl;
}

int main() {
    int size, k;
    cin >> size >> k;
    int* nums = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    maxInKSizeWindow(nums, size, k);
}
