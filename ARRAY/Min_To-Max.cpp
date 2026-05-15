#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int arr[N];

    // input
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // find minimum
    int mn = arr[0];

    for(int i = 1; i < N; i++) {
        if(arr[i] < mn) {
            mn = arr[i];
        }
    }

    // count elements greater than minimum
    int count = 0;

    for(int i = 0; i < N; i++) {
        if(arr[i] > mn) {
            count++;
        }
    }

    cout << count;

    return 0;
}