#include <iostream>
#include <math.h>
using namespace std;

class Polynomial{
    public: int x;
    public: int coefficient[];
    public: 
    Polynomial(int , int[], int);
    int calculateValue(int ax, int an){
        int asum = 0;
        for(int i = 0; i <= an; i++){
            asum += coefficient[i] * pow(x, i);
            // cout<<"i="<< i << "  c" << i << " coefff ="<< coefficient[i]<< " sum=" << asum << endl;
        }
        return asum;
    }
};

Polynomial::Polynomial(int n,  int c[2], int cx){
    for(int i = 0; i <= n; i++){
        coefficient[i] = c[i];
        cout<<coefficient[i] << endl;
    }
    x = cx;
}

static int n = 5;
int main(){
    int x;
    
    int a;
    cout<<"Give a number n ";
    cin>>n;
    cout<<"Give n+1 numbers ";
    int coef[n]; //= {1,2,3};
    for(int i = 0; i <= n; i++){
        //  cout<<"c" << i << "=";
        cin>> coef[i];
    }
    
    cout<<"Put in the x ";
    cin>>x;
    
    Polynomial p1(n,coef, x);
    cout<< p1.calculateValue( x, n);
    
    
    return 0;
}
