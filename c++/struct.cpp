#include<iostream>
using namespace std;


  // struct employee
   typedef struct employee
    {
        int id;
        char favchar;
        float salary;
   // };
  // struct employee is replace by ep, it is the application of  type def
} ep;
 int main()
 { //strut employee navneet;
    ep navneet;
    navneet.id=1;
    navneet.favchar='n';
    navneet.salary=100000;
    cout<<"the value is"<<" "<<navneet.salary<<endl;
    cout<<"the value is"<<navneet.favchar<<endl;
    cout<<navneet.id<<endl;
    return 0;

 }