#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    //int p=1;
    while(i<=n){
        int k=1;
        while (k<=n-i)
        {
            cout<<" ";
            k++;
        }
        
        int j=1;
        //int p=i;
        while(j<=i){
            cout<<j;
            j++;
           // p=p+1;
        }
int b=i-1;
        while(b>=1){
         cout<<b;
         b--;
        }
        cout<<endl;
        i++;
    }

}