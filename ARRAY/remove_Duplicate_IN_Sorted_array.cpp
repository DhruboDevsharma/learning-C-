#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // input array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Sort using Bubble Sort (loops only)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Step 2: Remove duplicates in-place
    int j = 0; // index of last unique element
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    int k = j + 1; // number of unique elements

    // Step 3: Print result
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    for(int i = k; i < n; i++) {
        cout << "_ ";
    }

    return 0;
}
