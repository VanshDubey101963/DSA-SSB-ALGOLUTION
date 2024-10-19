#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int findKthLargest(int* nums, int size, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < size; i++) {
        minHeap.push(nums[i]);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    return minHeap.top();
}

int main() {
    int size, k;
    cin >> size >> k;
    int* nums = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }
    cout << findKthLargest(nums, size, k) << endl;
}