#include <iostream>
using namespace std;
#include <string>

string star(int n){
        if(n == 0){
            return "#";
        }
        return "*" + star(n-1);
    }
int main(){
    cout<<"give the number"<<endl;
    int n = 0;
    cin>>n;
    int blank = n/2;
    
    if(n >= 19 || n <= 1){
        cout<<"give a number between 1 and 19"<<endl;
    }
    if(n%2 == 0){
        cout<<"you've inputed an even number, please give an odd number"<<endl;
        cin>>n;
    }
    if(n <= 19 && n >= 1){
        
        cout << star(n);
    }
    return 0;
}