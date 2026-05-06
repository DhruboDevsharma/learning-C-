#include<iostream>
using namespace std;
int main(){
    cout << "Enter row number: "<< endl;
    int n;
    cin >> n;
    
    for(int i =1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout <<"*" << " ";
        }
        cout << endl;
    }
    return 0;
}