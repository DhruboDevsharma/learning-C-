#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // প্রথম row, শেষ row, প্রথম column, শেষ column এ number print হবে
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << j << " ";
            } else {
                cout << "  "; // ভেতরে ফাঁকা space
            }
        }
        cout << endl;
    }

    return 0;
}
