#include<iostream>
using namespace std;
int main ()
{  
  //int mathmarks[6]={45,52,66,99,100,213,};
    int marks[5]={34,89,90,100};
   // you can change the value of array
    marks[2]=88;
    cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
      cout<<marks[2]<<endl;
       cout<<marks[3]<<endl;
      /* cout<<"this is math marks"<<endl;
       
       cout<<mathmarks[0]<<endl;
       cout<<mathmarks[1]<<endl;
     cout<<mathmarks[2]<<endl;
      cout<<mathmarks[3]<<endl;
       cout<<mathmarks[4]<<endl;*/
      int*p=marks; 
      cout<<*(p++)<<endl;
      cout<<*(++p);
      /* cout<<"the value of marks[0]"<<*p<<endl;
       cout<<"the value of marks[1]"<<*(p+1)<<endl;
       cout<<"the value of marks[2]"<<*(p+2)<<endl;*/

       return 0;
    

    

    

    
}