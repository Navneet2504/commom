#include<iostream>
using namespace std;
int checkpalindrom(int n)
{
    int result=0;
    int r;
    int temp;
    temp=n;
    
while(temp>0)
{
    r=temp%10;
    result=(result*10)+r;
    temp=temp/10;
} 
  if(result==n)
  return 0;
  else
  return 1;
}
   int main()
   {
    int n,val;
    //n=num;
    cout<<"enter the number"<<endl;
    cin>>n;
     val=checkpalindrom(n);
    if (val==0)
    {
    cout<<"number is palindrom";
    }
    else
    {
    cout<<"number is not palindrom";
    }
    return 0;
    
   }


















