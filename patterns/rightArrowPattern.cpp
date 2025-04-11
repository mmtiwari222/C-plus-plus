#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows (odd number): ";
    cin >> rows;

    // Upper part
    for(int i = 1; i <= rows/2; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Middle line
    for(int i = 1; i <= rows; i++) {
        cout << "* ";
    }
    cout << endl;

    // Lower part
    for(int i = rows/2; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}