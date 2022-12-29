#include<iostream>
using namespace std;
int main ()
{
    int n;
    int arr[n];
    cout<<"enter the array size"<<endl;
    cin>>n;
    //int arr[n];
    int i;
    cout<<"enter the element of array"<<endl;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout<<arr[i]<<endl;
    for(i=0;i<n;i++)
    if(arr[i]%2==0)
{
    cout<<"even"<<arr[i]<<endl;
}
 else
 {
    cout<<"odd"<<arr[i];
 }
    return 0;
}