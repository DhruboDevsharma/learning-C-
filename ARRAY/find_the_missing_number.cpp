#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // find maximum element
    int mx = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > mx) {
            mx = arr[i];
        }
    }

    // check missing numbers
    for(int num = 1; num <= mx; num++) {

        bool found = false;

        for(int i = 0; i < n; i++) {

            if(arr[i] == num) {
                found = true;
                break;
            }
        }

        if(found == false) {
            cout << num << " ";
        }
    }

    return 0;
}