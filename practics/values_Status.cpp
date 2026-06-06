#include<bits/stdc++.h>
using namespace std;

int main(){

    int val1, val2;
    cout <<"Enter Value 1: " ;
    cin >> val1 ; 
    cout << endl;
    cout << "Enter Value 2: ";
    cin>> val2;
    cout << endl;
    int diff;
    int ratio;
    
    if(val1>val2){
        cout << "Largest: "<< val1 << endl;
            cout << "Smallest : "<< val2 << endl;
            diff =val1-val2;
            ratio = val1/val2;

    }else {
        cout << "Largest: "<< val2 << endl;
        cout << "Smallest : "<< val1 << endl;
        diff =val2-val1;
        ratio = val2/val1;
    }

    int sum = val1 +val2 ;
    cout << "Sum: " << sum << endl;
    cout << "Difference :"  << diff <<endl;

    int multi = val1* val2;
    cout <<"Multiple : "<< multi << endl;
    cout <<"ratio : "<< ratio << endl;
    
}
       