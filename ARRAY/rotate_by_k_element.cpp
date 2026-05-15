#include <iostream>
using namespace std;

int main() {
    int n, k;
    string dir;
    cin >> n;
    int arr[n];

    // input array
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cin >> k >> dir;
    k = k % n; // handle k > n

    int result[n];

    if(dir == "right") {
        // shift right by k
        for(int i=0; i<n; i++) {
            result[(i+k)%n] = arr[i];
        }
    } else {
        // shift left by k
        for(int i=0; i<n; i++) {
            result[i] = arr[(i+k)%n];
        }
    }

    // print rotated array
    for(int i=0; i<n; i++) {
        cout << result[i] << " ";
    }
    return 0;
}
