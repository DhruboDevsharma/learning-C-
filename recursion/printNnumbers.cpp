#include<bits/stdc++.h>
using namespace std;

int Print(int n){
    if(n == 0){
    return 0;
}
    else {
        cout << n << endl;
        return Print(n-1);
    }
}

int main(){
    int n;

    cin >> n;

    int v= Print(n);

    cout << v << " ";

    
}