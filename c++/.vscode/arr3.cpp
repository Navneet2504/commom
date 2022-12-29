#include<iostream>
using namespace std;
int main()
{
    int arr[100],size,i,max;//min;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    cout<<"enter the element of array"<<endl;
    for(i=0;i<size;i++)
       cin>>arr[i];
    //cout<<arr[i]<<endl;
   max=arr[0];//min=arr[0];
   if(arr[i]>arr[0])
  // cin>>arr[i];
    max=arr[i];
    cout<<max;
    /*else(arr[i]<arr[0])
     min=arr[i];
     cout<<min;*/
     return 0;
}
