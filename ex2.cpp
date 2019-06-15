#include <iostream>
using namespace std;

int main(){
    double sum = 0.0;
    int n = 0;
    cout<<"input a number from 1 to n";
    cout<<endl;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i%4 == 1){
            sum += (1/(double)i) * 4;
        }else if(i%4 == 3){
            sum -= (1/(double)i) * 4;
        }
        if(i%1000 == 0){
            cout << sum << endl;
        }
    }
    return 0;
}