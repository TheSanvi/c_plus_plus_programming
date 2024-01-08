#include<iostream>
using namespace std;

int main() {
    int rowCount, colCount;
    cin >> rowCount;
    cin >> colCount;

    for (int row = 0; row < rowCount; row = row + 1) {
        if (row == 0 || row == 8) {
            for (int col = 0; col < colCount; col++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int i = 0; i < 3; i = i + 1) {
                cout << " ";
            }
        }
        cout << endl; // Add a newline after each row
    }

    // Add a return statement
}
