#include <iostream>
using namespace std;
inline int kms(int m)
{
    return m * 1.6;
}
int main()
{
    int a;
    cout<< "Enter Miles: "<<endl;
    cin>>a;
    cout << "The kilometers of "<< a << " is: " << kms(a) << "\n";
    return 0;
}