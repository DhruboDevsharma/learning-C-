#include <iostream>
using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--) {

        int N;
        cin >> N;

        int arr[N];

        for(int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        bool ok = true;

        for(int i = 1; i < N; i++) {

            if(arr[i] < arr[i - 1]) {
                ok = false;
                break;
            }
        }

        if(ok) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}