#include <iostream>
using namespace std;
inline int cube(int s)
{
    return s*s*s;
}
int main()
{
    int a;
    cout<< "Enter a number: "<<endl;
    cin>>a;
    cout << "The cube of "<< a << " is: " << cube(a) << "\n";
    return 0;
}