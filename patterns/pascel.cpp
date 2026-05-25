#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (binomial coefficient)
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;
    cout << "Enter number of rows: " <<endl;
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int space = 0; space < rows - i; space++) {
            cout << " ";
        }
        // Print numbers using nCr
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
