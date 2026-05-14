#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Copy arr1 → arr2
    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Copied array: ";
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
}
