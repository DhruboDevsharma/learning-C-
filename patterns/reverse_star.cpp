#include<iostream>
using namespace std;
int main(){
    cout << " enter the number of rows:" << endl;
    int n;
    cin >> n;
    for(int i= 1; i<= n; i++){
        for(int j =n; j>=i; j--){
            cout <<"*" << " ";
        }
        cout << endl;
    }
}