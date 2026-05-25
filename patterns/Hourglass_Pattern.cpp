#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: " <<endl;
    cin >> n;

    // Upper half (inverted pyramid)
    for (int i = n; i >= 1; i--) {
        // leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // stars
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half (normal pyramid)
    for (int i = 2; i <= n; i++) {
        // leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // stars
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
