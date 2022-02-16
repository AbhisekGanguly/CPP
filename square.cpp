#include<iostream>
using namespace std;

int sqr(int x);

int main(){
    int a, ans;
    cout<<"Enter any number: "<<endl;
    cin>>a;
    ans = sqr(a);
    cout<<"Square is"<<ans;
    return 0;
}

int sqr(int x){
    return (x * x);
}


