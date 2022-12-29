#include<iostream>
using namespace std;
 void swap(int a, int b)// this is not swap
 {
    int temp= a;
    a=b;
    b=temp;
 }
 //this is call by refrence by pointer
 void swappointer(int *a, int *b)
 {
    int temp= *a;
    *a=*b;
    *b=temp;
 }
 
 void swapRefrence(int &a,int &b)
 //int & swapRefrence(int &a,int &b)


 {int temp=a;
    a=b;
    b=temp;
    //return b;
    //return a;

 }
 int main(){
 int a=4,b=2;
 cout<<"the value of a"<< a<<" and the value of b"<<" "<< b<<endl;
 swap(a,b);  //this is not swap
 //swappointer(&a,&b);
 //swapRefrence( a,b)=44;
 swapRefrence( a,b);
 cout<<"the value of a"<< a<<" and the value of b"<<" "<< b<<endl;
 return 0;
 }

