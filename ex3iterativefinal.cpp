#include <iostream>
using namespace std;

int main(){
    cout<<"give the number"<<endl;
    int n = 0;
    cin>>n;
    if(n > 19 || n < 1){
        cout<<"give a number between 1 and 19"<<endl;
        cin>>n;
    }
    if(n%2 == 0){
        cout<<"you've inputed an even number, please give an odd number"<<endl;
        cin>>n;
    }
    if(n <= 19 && n >= 1){
        
        for(int i = 1; i <= n + 1; i++){
         
            for(int j = 1; j <= n; j++){
                    
                if(i <= (n/2 + 1)){
                    if(j > (n/2)-(i-1) && j < (n/2)+(i+1)){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                }else{
                    if(j >= (n/2)-((n - i) - 1) && j <= (n/2)+((n - i) + 1)){
                        cout<<"*";
                    }else{
                        cout<<" ";
                         
                    }
                }
            }
             cout << endl;
        }
    }
    return 0;
}