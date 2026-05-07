#include<iostream>
using namespace std;

int main(){
    string First = "Dhrubo";
    string second = "Dev";

    string full= First +" "+ second;

    cout << full[9];

    // we can also use at() function to find the string at the possition we required

    cout<< endl;
    cout << full.at(second.length()-1);
}