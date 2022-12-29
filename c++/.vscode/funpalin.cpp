#include<iostream>
using namespace std;
int checkpalindrom(int);
int main() 
{int n;
int val;
cout<<"enter any number"<<endl;
cin>>n;
val=checkpalindrom(n);
if (val==0)
cout<<"number is palindrom";
else
cout<<"number is not palindrom";
cout<<endl;
return 0;

}
 int checkpalindrom(int n)
 {
    int temp;
    int rez;
    int rev=0; 
    temp=n;
    while(temp>0)
    {
    rez=temp%10;
    rev=(rev*10)+rez;
    temp=temp/10;
    }
    if(rev==n)
    {
    return 0;
    }
    else
    {
    return 1;
    }


 }