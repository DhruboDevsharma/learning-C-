#include<iostream>
using namespace std;

int main(){
    int a =5;
    int b= 5;
    int c=8;
    int d =3;

    //cout << max(a,b,c,d);// we can't took more over 2 values. max can compare only two values;

    cout << max(max(a,b), max(c,d));
    return 0;
}