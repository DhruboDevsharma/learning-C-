#include<bits/stdc++.h>
using namespace std;

int Print(int n){
    if(n == 0){
    return 0;
}
        return Print(n-1);
        
    
}

int main(){
    int n;

    cin >> n;

     Print(n);

    

    
}