#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& arr) {
    int pos = 0; // position for next non-zero
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] != 0) {
            arr[pos++] = arr[i];
        }
    }
    // fill remaining with zeros
    while(pos < arr.size()) {
        arr[pos++] = 0;
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    moveZeros(arr);

    for(int i=0; i<N; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
