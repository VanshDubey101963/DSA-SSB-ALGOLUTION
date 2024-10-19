#include <iostream>
using namespace std;

int maxProfit(int* prices, int size) {
    int maxProfit = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int profit = prices[j] - prices[i];
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    return maxProfit;
}

int main() {
    int size;
    cin >> size;
    int* prices = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> prices[i];
    }
    cout << maxProfit(prices, size) << endl;
}
