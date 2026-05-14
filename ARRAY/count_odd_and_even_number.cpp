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

    int odd=0;
    int even = 0;

    for(int i =0; i<n; i++){
        if(arr[i]%2 == 0){
            even++ ;
        }
        else{
            odd++;
        }
    }
    cout << " Total even numbers: " << even << endl;
    cout << "Total odd numbers : " << odd << endl;



    return 0;
 }