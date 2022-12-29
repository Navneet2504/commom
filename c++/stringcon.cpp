#include<iostream>
#include<string>
using namespace std;
int main(){
       string str;
       //cin>>str; not take space;
       getline(cin,str);
       cout<<str<<endl;
       // add two string
       string str1="nav";
       string str2="neet";
       string str3="hello";
      str3.append(str2);
      //str2=str2+str1;
      //str2.clear();
       //cout<<(str2)<<endl;
       cout<<str2[3]<<endl; //slicing
      // cout<<(str1)<<endl;
      //clear function
         //str2.clear();
      //cout<<str2<<endl;
      //compare function
      string s4="abc";
      string s5="xyz";
       cout<<s5.compare(s4)<<"\n";

    return 0;
}