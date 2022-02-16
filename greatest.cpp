#include<iostream>
using  namespace std;

inline int compare(int, int, int);
int main(){
    int x,y,z,t;
    cin>>x>>y>>z;
    cout<<"The largest number of the three are: "<< compare(x,y,z)<<endl;
    return 0;
}

int compare(int x, int y, int z){
    if(x>y && x>z){
        return x;
    }
    else if(y>z){
        return y;
    }
    else{
        return z;
    }
}