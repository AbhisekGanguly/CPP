#include<iostream>
using namespace std;
inline float divi(float num1, float num2)
{
    int num3=num2/num1;
    return num3;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"The division is: "<< divi(a,b);
    return 0;
}