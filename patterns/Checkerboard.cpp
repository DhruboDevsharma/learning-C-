#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    cout << "Enter number of columns: " << endl;
    cin >> cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // যদি row+col even হয় তাহলে star, না হলে space
            if ((i + j) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
