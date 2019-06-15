#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    cout<<"input a NATURAL number from 1 to n";
    cout<<endl;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i%2 == 1){
            sum+=i;
        }
    }
    cout<< sum;
    return 0;
}