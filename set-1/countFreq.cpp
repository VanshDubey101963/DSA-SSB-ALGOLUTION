#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[5] = {1, 2, 4, 3, 3};
    unordered_map<int, int> frequencyMap;

    for (int i = 0; i < 5; i++) {
        frequencyMap[arr[i]]++;
    }

    for (auto entry : frequencyMap) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
