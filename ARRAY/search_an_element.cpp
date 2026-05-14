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

    int target;
    cin >> target;

    int index =0;

    for(int i=0; i<n; i++){
        if(target == arr[i]){
            cout <<"Target found at: "<< i << endl;
            return 0;
        }
    }
    cout <<"Target not found ."<< endl;




 }