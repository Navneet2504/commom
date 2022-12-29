#include<iostream>
using namespace std;
int faci(int n){
    if(n==0||n==1){
      return n;
    }

    return faci(n-1)+faci(n-2);
}
 
 int main(){
    int n;
    cin>>n;
    cout<<faci(n)<<endl;
    return 0;
 }