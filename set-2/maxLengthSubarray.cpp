#include <iostream>
#include <unordered_map>
using namespace std;

int maxLengthSubarrayWithSum(int* nums, int size, int targetSum) {
    unordered_map<int, int> prefixSumMap;
    int maxLength = 0;
    int currentSum = 0;

    for (int i = 0; i < size; i++) {
        currentSum += nums[i];

        if (currentSum == targetSum) {
            maxLength = i + 1;
        }

        if (prefixSumMap.find(currentSum - targetSum) != prefixSumMap.end()) {
            maxLength = max(maxLength, i - prefixSumMap[currentSum - targetSum]);
        }

        if (prefixSumMap.find(currentSum) == prefixSumMap.end()) {
            prefixSumMap[currentSum] = i;
        }
    }

    return maxLength;
}

int main() {
    int size, targetSum;
    cin >> size >> targetSum;
    int* nums = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    cout << maxLengthSubarrayWithSum(nums, size, targetSum) << endl;
}
