#include<iostream>
using namespace std;

int area(int S);

int perimeter(int S);

int areaRectangle(int Q, int P);

int perimeterRectangle(int Q, int P);

int main(){
    int a, ar, pm, l, b, recA, recP;
    cout<<"Enter the length of the sides of square: "<<endl;
    cin>>a;
    cout<<"Enter length and bredth of rectangle"<<endl;
    cin>>l>>b;
    recA = areaRectangle(l, b);
    recP = perimeterRectangle(l, b);
    ar = area(a);
    pm = perimeter(a);

    cout<<"Square Area is: "<<ar<<endl;
    cout<<"Square Perimeter is: "<<pm<<endl;

    cout<<"Rectangle Area is: "<<recA<<endl;
    cout<<"Rectangle Perimeter is: "<<recP<<endl;
    return 0;
}

int area(int S){
    return (S * S);
}

int perimeter(int S){
    return (4 * S);
}

int areaRectangle(int Q, int P){
    return (Q * P);
}

int perimeterRectangle(int Q, int P){
    return (2 * (Q + P));
}