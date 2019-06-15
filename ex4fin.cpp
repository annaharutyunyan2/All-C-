#include <iostream>
using namespace std;

int tripleByValue(int x){
    int y = 3 * x;
    return y;
}

int tripleByReference(int *x){
    return 3 * (*x);
}

int main (){
  int count;
  cout<<"Give a number ";
  cin>>count;
  cout<<tripleByValue(count)<<endl;
  cout<<tripleByReference(&count);
  return 0;
}