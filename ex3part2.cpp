#include <iostream>
#include <math.h>
using namespace std;

const double pi = 3.1415926535897;
struct Circle{
    int r;
    double circumference(){
    return 2 * pi * r;
}

    double area(){
    return pi * pow(r, 2);
}
};
int main(){
    struct Circle circle1;
    cout<<"Give your desired radius ";
    cin>>circle1.r;
    cout<<"Circumference is: ";
    cout<<circle1.circumference()<< endl;
    cout<<"Area is: ";
    cout<<circle1.area();
    return 0;
}