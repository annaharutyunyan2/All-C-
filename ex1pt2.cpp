#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"Put in the number n ";
    cin>>n;
    cout<<"Now put in n+1 numbers"<< endl;
    int a;
    int x;
    int coefficient[n+1];
    
    for(int i = 0; i < n + 1; i++){
        cin>>a;
        coefficient[i] = a;
    }
    
    cout<<"Put in the x ";
    cin>>x;
    int sum = 0;
    for(int i = 0; i < n + 1; i++){
        sum += coefficient[i] * pow(x, i);
    }
    cout<<sum;
    return 0;
}