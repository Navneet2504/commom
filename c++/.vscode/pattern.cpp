#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<j<<" ";
        for(k=j-2;k>=1;k--)
        cout<<" ";
        cout<<endl;
    }
    return 0;
}