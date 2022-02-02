#include<iostream>
using namespace std;

int main(){
    int a; //declaration
    a = 12; //initialization

    cout<<"Size of int: "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of float: "<<sizeof(b)<<endl;

    double c;
    cout<<"Size of double: "<<sizeof(c)<<endl;

    char d;
    cout<<"Size of Character: "<<sizeof(d)<<endl;

    bool e;
    cout<<"Size of Boolean: "<<sizeof(e)<<endl;


    //given below are different types of type modifiers.

    short int si;
    cout<<"Size of short int: "<<sizeof(si)<<endl; // -32,768 to 32,767

    long int li;
    cout<<"Size of long int: "<<sizeof(li)<<endl; // -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    signed int sni;
    cout<<"Size of signed int: "<<sizeof(sni)<<endl; // -2,147,483,648 to -2,147,483,647

    unsigned int usni;
    cout<<"Size of unsigned int: "<<sizeof(usni)<<endl; // 0 to 4,294,967,295

    return 0;
}