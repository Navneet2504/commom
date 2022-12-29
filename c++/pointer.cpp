#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *b=&a;
  //  pointer:- it is a data type which holds the address of other data type
  cout<<"the address of a is"<<&a<<endl;
  cout<<"the address of a is"<<b<<endl;
   cout<<"the address of b is"<<*b<<endl;
  return 0;

}