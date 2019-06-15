#include <iostream>
using namespace std;

int main(){
    cout<<"give the number"<<endl;
    int n = 0;
    cin>>n;
    int blank = n/2;
    if(n > 19 || n < 1){
        cout<<"give a number between 1 and 19"<<endl;
    }
    if(n%2 == 0){
        cout<<"you've inputed an even number, please give an odd number"<<endl;
        cin>>n;
    }
    if(n < 19 && n > 1){
        for(int i = 1; i <= ((int)n/2)+1; i++){
            for(int i = 1; i <= blank; i++){
                cout<<" ";
            }
        blank--;
            for(int j = 1; j <= 2 * i -1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        blank = 1;
        for(int i = (int)(n/2); i >= 0; i--){
            for(int j = 1; j <= blank; j++){
                cout<<" ";
            }
            blank++;
            for(int j = 1; j <= 2 *i - 1; j++){
                cout<<endl;
            }
            return 0;
        }
    }
    
}