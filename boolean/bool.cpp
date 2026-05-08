#include<iostream>
using namespace std;

int main(){
    bool isCodingFun = true;

cout << boolalpha;   // print as true/false
cout << isCodingFun << "\n";  // Outputs true

//If you want to go back to the default behavior (printing 1 and 0), you can use noboolalpha

cout << noboolalpha; // reset to 1/0
cout << isCodingFun << "\n";  // Outputs 1
}