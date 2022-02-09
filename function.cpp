#include<iostream>
using namespace std;

void customName(string name){
    cout<<"This is the function"<<endl;
    cout<<"Hello, "<<name;
}

int main(){
    string name;
    cout<<"Enter Name:-"<<endl;
    cin>>name;

    customName(name);

    return 0;
}