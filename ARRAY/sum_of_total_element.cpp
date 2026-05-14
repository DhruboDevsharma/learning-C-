#include<iostream>
 using namespace std;

 int main(){

    cout << "Enter the size of array" << endl;

    int n;

    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){

        cin >> arr[i];
    }

    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    cout << "Total :" << sum << endl;



    return 0;
 }