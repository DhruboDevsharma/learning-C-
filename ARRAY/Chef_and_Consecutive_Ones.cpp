#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int count = 0;
    int mx = 0;

    for(int i = 0; i < N; i++) {

        if(arr[i] == 1) {
            count++;
        }
        else {
            count = 0;
        }

        if(count > mx) {
            mx = count;
        }
    }

    cout << mx;

    return 0;
}