#include<iostream>
using namespace std;

int main(){
    cout << "Enter the number os array elements"<< endl;
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the target value" << endl;
    
    int target ;
    cin >> target;
    int time = 0;
    for(int i=0; i<n; i++){
        if(target == arr[i]){
            time = time+1;
        }
    }

    cout << "Repeated number :" << time<< endl;


}