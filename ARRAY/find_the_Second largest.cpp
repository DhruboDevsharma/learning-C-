#include<iostream>
using namespace std;

int main(){

    cout << "ENter the arr number"<< endl;
    int n ;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    int max = arr[0];

    for(int i=0; i<n-1; i++){
        if(max<arr[i]){
            max = arr[i];
        }

    }
    cout << max<< "MAX"<<endl;
    if(max < arr[n-1]){
        cout << "Second largest"<< max;
    }
    else{ cout <<"Second largest "<< arr[n-1];}
}