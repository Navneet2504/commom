#include<bits/stdc++.h>
using namespace std;
//max size of arr 10^7->int ,double,char(global)
//int arr[10000000]
//max size of bool
//bool[100000000]
int main(){
    //max size of arr 10^6(local)
    //int a[1000000] 
    //max size of bool 10^7
       // bool[10000000]
    array<int,5> arr={1,8,3,4,9};
   /* for(auto it = arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }*/
   //  cout<<endl;
  //     for(auto it = arr.rbegin();it!=arr.rend();it++){
//         cout<<*it<<" ";
//     }
   //    cout<<endl;
   //    for(auto it = arr.end()-1;it>=arr.begin();it--){
     //    cout<<*it<<" ";
     // }
//     cout<<endl;
//     for(auto it:arr){
//        cout<<it<<" "; 
//     }
//     cout<<endl;
//     string s="ABES ENGINEERING";
//     for(auto c:s){
//         cout<<c<<" ";
//     }
  //  //size
//     cout<<arr.size();
//    //front
//     cout<<arr.at(0);//arr.front()
//     //back
//    cout<<arr.back();//arr.at(arr.size()-1)
//     //vector
//     //int arr[50];
//     vector<int>a;
//     cout<<a.size()<<endl;//0
//     a.push_back(0);
//     a.push_back(1);
//     a.push_back(2);
//     cout<<a.size()<<endl;//3
//     a.pop_back();
//     cout<<a.size()<<endl;//2
//     a.push_back(5);
//     a.push_back(5);
//     a.push_back(5);
//     a.push_back(5);
//     a.clear();
//     cout<<a.size()<<endl;//0
    vector<int>b(4,0);//->{0,0,0,0}
     b.push_back(9);
     b.push_back(8);
     b.push_back(7);
     b.push_back(7);
     cout<<b.size()<<endl;
     vector<int>c(b.begin(),b.end());//copy entire b to c
    for(auto it = c.begin();it!=c.end();it++){
         cout<<*it<<" ";
     }
//     cout<<"\n";
//     vector<int>nav;
//     nav.push_back(6);//nav.emplace_back(1) take lesser time push_back
//     nav.push_back(5);
//     nav.push_back(4);
//     nav.push_back(3);//{6,5,4,3}
//     vector<int>nav1(nav.begin(),nav.begin()+2);
//     for(auto it = nav1.begin();it!=nav1.end();it++){
//         cout<<*it<<" ";
//     }
//       // lower bound,upper bound
//       //swap swap(v1,v2)
//       //begin(),endl(),rbegin(),rend()
//       // to defining 2d vectors
//       vector<vector<int>>d;
//       vector<int>a1;
//       a1.push_back(1);
//       a1.push_back(2);
//       a1.push_back(3);
//       a1.push_back(4);
//       a1.push_back(5);
//       //a1.push_back(3);
//       vector<int>a2;
//       a2.push_back(10);
//       a2.push_back(20);
//       a2.push_back(30);
//       a2.push_back(40);
//       a2.push_back(50);
//       //a2.push_back(30);
//       d.push_back(a1);
//       d.push_back(a2);
//       cout<<"\n";
//       for (int i = 0; i < d.size(); i++)
//     {
//         for (int j = 0; j < d[i].size(); j++)
//         {
//             cout << d[i][j] << " ";
//         }    
//         cout << endl;
//     }
//     // define 10*20;
//     //vector<vector<int>>vec(10,vector<int>(20,0))
//    //SECOND VIDEO
//       set<int>st;  //set[0] is invalid
//       int n;
//       cin>>n;
//       for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         st.insert(x); // time complexity of insert log(n) where n is size of set 
//       }
//       //st->{1,2,3}
//       //eraser functionality  time complexity log(n)
//       st.erase(st.begin());  // st.erase(iterator)//st->{2,5}
//       st.erase(st.begin(),st.begin()+2);
//       st.erase(5) ;  // st.erase(key),delete the 5
      
     return 0;
}