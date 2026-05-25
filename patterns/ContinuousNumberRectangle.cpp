#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    cout << "Enter number of columns: " << endl;
    cin >> cols;

    int num = 1; // শুরু সংখ্যা

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << num << " ";
            num++; // পরের সংখ্যা
        }
        cout << endl;
    }

    return 0;
}
