#include<bits/stdc++.h>
using namespace std;
/*void print(map<int,string>&mp){
    cout<<mp.size()<<endl;
//map printing way 1
  for(auto &pr:mp){
    cout<<pr.first<<" "<<pr.second<<endl;
  }
  //map printing way 2 
    map<int,string>:: iterator it;
    for(it =mp.begin();it!=mp.end();++it)
    cout<<(*it).first<<" "<<(*it).second<<"\n";
 
}*/
int main(){
  //1. inbuilt implementation
  //2. Time complexity
  //3. valid keys datatype
  //unordered_map<int,string>m;
  /*map<int,string>mp;
  mp[5]="20.5";//time complexity log(n) where n is size of map
  mp[1]="def";
  mp[3]="ghi";
  mp[4]="jkl";
  mp.insert({2,"mnp"});//another way to insert value in map
//mp[6]; //default value take zero
mp.erase(5);
//mp.clear();
  print(mp);
   //auto it=mp.find(6);//time complexity log(n)
   
//    if(it==mp.end()){
//     cout<<"NO Value";
//    } 
//    else{
//     cout<<(*it).first<<" "<<(*it).second<<"\n";
//    }*/
/*Question
Given N strings, print unique strings in lexicographical order with their frequency
n<=10^5
|s|<=100000
*/
map<int,int>m;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a[n] ;
    cin>>a[i];
    m[a[i]]++;
}
for(auto pr:m){
    cout<<pr.first<<" "<<pr.second<<endl;
}
   /*Given N strings and Q queries,
   In each query you are given a string print frequency of that string*/
  //  unordered_map<string,int>mpp;
  //  int n;
  //  cin>>n;
  //  string s;
  //  for(int i=0;i<n;i++){
  //   string s;
  //   cin>>s;
  //   mpp[s]++;
  //  }
  //  int q;
  //  cin>>q;
  //  while(q--){
  //   //string s;
  //   //cin>>s;
  //   cout<<mpp[s]<<endl;
  //  }
    return 0;
}