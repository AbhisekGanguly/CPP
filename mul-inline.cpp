#include <iostream>
using namespace std;
inline int multi(int s, int p)
{
    return s*p;
}

int main()
{
    int a, b;
    cout<< "Enter two numbers: "<<endl;
    cin>>a>>b;
    cout << "The product of "<< a << " and " << b << " is: " << multi(a, b) << "\n";
    return 0;
}