#include <iostream>
#include <vector>
using namespace std;

int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    int count = 0;
    int i = left, j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            count += (mid - i + 1);
        }
    }
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);
    for (int k = left; k <= right; k++) arr[k] = temp[k - left];
    
    return count;
}

int mergeSortAndCount(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;
    int mid = (left + right) / 2;
    return mergeSortAndCount(arr, left, mid) + mergeSortAndCount(arr, mid + 1, right) + mergeAndCount(arr, left, mid, right);
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << mergeSortAndCount(arr, 0, size - 1) << endl;
}