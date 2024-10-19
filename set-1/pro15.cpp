#include <iostream>
using namespace std;

void printPattern(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }
}

int main() {
    int rows, columns;
    cin >> rows;
    cin >> columns;

    printPattern(rows, columns);
}
