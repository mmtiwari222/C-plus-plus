#include <iostream>
using namespace std;

int main() {
    int rows, space;
    cout << "Enter number of rows (half of diamond): ";
    cin >> rows;

    // Upper part
    for(int i = 1; i <= rows; i++) {
        for(space = 1; space <= rows-i; space++) {
            cout << "  ";
        }
        for(int j = 1; j <= 2*i-1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower part
    for(int i = rows-1; i >= 1; i--) {
        for(space = 1; space <= rows-i; space++) {
            cout << "  ";
        }
        for(int j = 1; j <= 2*i-1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}