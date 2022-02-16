#include<iostream>
using namespace std;

int tempConv(int C);

int main(){
    int a, ans;
    cout<<"Enter temperature in Celcius: "<<endl;
    cin>>a;
    ans = tempConv(a);
    cout<<"The temperature in Farhenite is: "<<ans;
    return 0;
}

int tempConv(int C){
    return ((1.8 * C) + 32);
}