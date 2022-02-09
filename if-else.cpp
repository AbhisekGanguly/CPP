#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a > b && a > c){
        cout<<"The Biggest number is: "<<a;
    }
    else if (b > a && b > c)
    {
        cout<<"The Biggest Number is: "<<b;
    }
    else{
        cout<<"The biggest number is: "<<c;
    }
    

    return 0;
}