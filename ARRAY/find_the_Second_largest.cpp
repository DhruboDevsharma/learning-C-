#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int second = -1;  // assuming positive numbers; adjust if negatives possible

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;   // old largest becomes second
            largest = arr[i];   // update largest
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];    // update second largest
        }

        
    }

    cout << "Largest = " << largest << endl;
    cout << "Second Largest = " << second << endl;

    return 0;
}
