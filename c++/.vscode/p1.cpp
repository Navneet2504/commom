#include<iostream>
using namespace std;
 int main()
 {
   // int arr[n];
   int n;
    int i,sum=0;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array"<<endl;
    for(i=0;i<n;i++)
     cin>>arr[i];
    for(i=0;i<n;i++)
     sum=sum+arr[i];
     cout<<sum;
     return 0;

}