#include <iostream>
using namespace std;

bool twoSum(int* nums, int size, int target) {
    int left = 0, right = size - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return true;
        }
        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

int main() {
    int size, target;
    cin >> size >> target;
    int* nums = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    cout << (twoSum(nums, size, target) ? "True" : "False") << endl;
}
