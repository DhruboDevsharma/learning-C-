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

    for(int i=0; i<n; i++){
        if(max< arr[i]){
            max = arr[i];
        }    
    }
    int sec= 0;
    for(int i=0;i<n; i++){
        if(sec<max){
            sec = sec;

        if( sec>arr[i]){
            sec=arr[i];
        }
    }
}
   
    cout <<"Second largest "<< sec;

}