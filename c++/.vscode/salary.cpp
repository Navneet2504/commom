#include<iostream>
using namespace std;
int main()
{  int bs;
  cout<<"enter basic salary"<<endl;
  cin>>bs;
  int hra=0.2*bs;
  int da=0.5*bs;
  int pf=0.11*bs;
  int allow,ts;

  cout<<"enter the grade"<<endl;
  char y;
  cin>>y;
  
  if(y =='A')
  {
     allow=1700;
   // int ts=bs+hra+da+allow-pf;
      cout<<ts<<endl;
  }
  else if(y=='B')
  {
     allow=1500;
    //int ts=bs+hra+da+allow-pf;
    //cout<<ts<<endl;
  }
  else if(y=='C')
  {
     allow=1300;
   // int ts=bs+hra+da+allow-pf;
   // cout<<ts<<endl;
  }
  else 
  {
     allow=1300;
    //int ts=bs+hra+da+allow-pf;
    //cout<<ts<<endl;
  }
    ts=bs+hra+da+allow-pf;
    cout<<ts<<endl;
  return 0;
}