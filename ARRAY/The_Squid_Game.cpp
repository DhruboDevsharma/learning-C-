#include <iostream>
using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--) {

        int N;
        cin >> N;

        int arr[N];

        int sum = 0;
        int mn;

        for(int i = 0; i < N; i++) {
            cin >> arr[i];

            sum += arr[i];

            if(i == 0) {
                mn = arr[i];
            }
            else if(arr[i] < mn) {
                mn = arr[i];
            }
        }

        cout << sum - mn << endl;
    }

    return 0;
}