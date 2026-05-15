#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // total range is 1..n
    int arr[n-1];

    // input array of size n-1
    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    // Step 1: expected sum of 1..n
    int expectedSum = 0;
    for(int i = 1; i <= n; i++) {
        expectedSum += i;
    }

    // Step 2: actual sum of given array
    int actualSum = 0;
    for(int i = 0; i < n-1; i++) {
        actualSum += arr[i];
    }

    // Step 3: missing number
    int missing = expectedSum - actualSum;
    cout << missing;

    return 0;
}
