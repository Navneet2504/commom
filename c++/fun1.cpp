#include<iostream>
using namespace std ;

/*int sum (int a, int b)
{
int c=a+b;
return c;
}*/
// function prototypying
//int sum(int a,int b);// acceptable form
//int sum(int a, b);//non acceptable

int sum(int ,int );//acceptable
void g();
int main()
{
    int num1 , num2;
    //int num2;
    cout<<"enter first num."<<endl;
    cin>>num1;
    cout<<"enter second num."<<endl;
    cin>>num2;
    cout<<"the sum is"<<sum(num1,num2);
    g();
    return 0;
}
int sum (int a, int b)
{
int c=a+b;
return c;
}
void g()
{
    cout<<"\nhello";
}