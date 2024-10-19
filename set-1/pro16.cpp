#include <iostream>
using namespace std;

void printPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (j <= i) {
                cout << (i + 1);
            } else {
                cout << j;
            }
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cin >> rows;

    printPattern(rows);

    return 0;
}
