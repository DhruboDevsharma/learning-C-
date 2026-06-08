#include<bits/stdc++.h>
using namespace std;

void sum(int a, int b){
    int Sum = a+b;
    cout << "Sum=" << Sum << endl;
}
void dif(int a, int b){
    int Diff = a-b;
    cout <<"Differ= "<< Diff << endl;
}




int main(){
    int num1, num2;

    cin >> num1 >> num2;

    sum(num1, num2);
    dif(num1, num2);



}