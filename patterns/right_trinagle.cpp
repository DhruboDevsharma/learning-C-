#include<iostream>
using namespace std;
int main(){
    cout << "Enter row number: " << endl;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){              // row control
        // প্রথমে space প্রিন্ট করবো
        for(int j = 1; j <= n - i; j++){
            cout << "  ";                     // দুইটা space
        }
        // তারপর star প্রিন্ট করবো
        for(int k = 1; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
