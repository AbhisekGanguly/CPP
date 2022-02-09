#include<iostream>
using namespace std;

void add(int, int);

int main(){
    int a, b;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;
    add(a,b);
    return 0;    
}

void add(int x, int y){
    int c;
    c = x + y;
    cout<<"The Sum of the numbers are: "<<c<<endl;
}
