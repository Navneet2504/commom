#include<iostream> 
using namespace std;
 int armstrong(int num)
 {
    int sum=0,r,temp;
    temp=num;
     while(temp>0)
     {
    r=temp%10;
    sum=sum+(r*r*r);
    temp=temp/10;

     }
     if(sum==num)
     {
        return 1;
     }
     else
     {
        return 0;
     }

 }
  int main()
  {
    int num,result;
    cout<<"enter any number"<<endl;
    cin>>num;
    result=armstrong(num);
    if(result==1)
    {
        cout<<"number is armstrong";

    }
    else
    {

    cout<<"number is not armstrong";
    }
    return 0;

  }