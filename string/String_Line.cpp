#include<iostream>
#include<string>
using namespace std;

int main(){
    string First ;
    string line ;
    cin>> First;
   

    cout << First<<endl;

    // C++ input string as usual but i can input a full line using getline() function.
    getline(cin>>ws, line);

    cout << line;
}