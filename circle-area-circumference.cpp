#include<iostream>
using namespace std;

int area(int S);

int circumference(int S);

int main(){
    int a, ar, cf;
    cout<<"Enter the length of the radius: "<<endl;
    cin>>a;
    ar = area(a);
    cf = circumference(a);
    cout<<"Area is: "<<ar<<endl;
    cout<<"Circumference is: "<<cf<<endl;
    return 0;
}

int area(int S){
    return (3.14 * S * S);
}

int circumference(int S){
    return (2 * 3.14 * S);
}