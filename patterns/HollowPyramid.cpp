#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // stars and hollow spaces
        for (int k = 1; k <= 2 * i - 1; k++) {
            if (k == 1 || k == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
