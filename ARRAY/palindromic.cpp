#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool palindrome = true;

    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "Array is Palindromic" << endl;
    else
        cout << "Array is Not Palindromic" <<endl;

    return 0;
}