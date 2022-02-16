#include<iostream>
using namespace std;

int tempConv(int F);

int main(){
    int a, ans;
    cout<<"Enter temperature in Farhenite: "<<endl;
    cin>>a;
    ans = tempConv(a);
    cout<<"The temperature in Celcius is: "<<ans;
    return 0;
}

int tempConv(int F){
    return ((F - 32) * 0.5556);
}