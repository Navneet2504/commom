#include<iostream>
using namespace std;
 int search (int arr[],int s,int n){
    for(int i=0;i<=s;i++){
        if(arr[i]==n)
        return 1;
    }
    return 0;
 }
 int main(){
    int n,s;
    int arr[100];
    cout<<"enter the size of array"<<endl;
    cin>>s;
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<s;i++){
        cin>>arr[i];

    }
    cout<<"enter search key"<<endl;
    cin>>n;
    int a=search(arr,s,n);
    cout<<a<<"index";
 }