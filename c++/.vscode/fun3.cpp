 using namespace std;
 #include<iostream>
//using namespace std;
int check(int n1)
{ if(n1%2==0) 
 cout<<"number is even";
 else
   cout<<"number is odd";
    return 0;

}
 int main()
 {  int n1;
    cout<<"/nfunction:- check number is even/odd";
    cout<<"---------------------"<<endl;
    cout<<"enter any number"<<endl;
    cin>>n1;
    check(n1);
    //if(n1%2==0)
   /* {
        cout<<"number is even"<<endl;

    }
    else
    {
        cout<<"number is odd"<<endl;
    } */
    return 0;

 }