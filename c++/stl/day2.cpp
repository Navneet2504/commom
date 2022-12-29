#include<bits/stdc++.h>
using namespace std;
int main(){
  set<int>st={1,3,2,6,5};
  for(auto it = st.begin();it!=st.end();it++){
         cout<<*it<<" ";
      }
      cout<<endl;
   //auto it =st.find(4);//log(n)
   st.emplace(9);for(auto it = st.begin();it!=st.end();it++){
         cout<<*it<<" ";
      }
      cout<<endl;
     cout<<st.size();
     //set has store unique value as well as ascending order
     set<int>st1;
     st1.insert(5);
     st1.insert(5);
     for(auto it = st1.begin();it!=st1.end();it++){
         cout<<*it<<" ";
      }
      cout<<"\n";
//delete the entrie set 
 st.erase(st.begin(),st.end());
 //UNORDERED SET ONLY ELEMENT STORE UNORDERED WAY ALL OPERATIONS ARE SAME 
 unordered_set<int>st2;//Average time complexity is O(1)  but worst case is linear in nature ,O(set size)
 st2.insert(2);
 st2.insert(3);
 st2.insert(1);
 for(auto it = st2.begin();it!=st2.end();it++){
         cout<<*it<<" ";
      }
      cout<<endl;
 //Multiset is store element in sotrd form
 multiset<int>ms;
 ms.insert(1);
 ms.insert(3);
 ms.insert(4);
 ms.insert(5);
 ms.insert(1);
 ms.insert(4);
 ms.insert(4);
 ms.insert(5);
 cout<<ms.count(2)<<endl;
 auto it=ms.find(2);
 cout<<*it<<"ddd"<<endl;
 //ms.erase(ms.find(2));/// it will remove only one value of 2 from multiset
 cout<<ms.count(4)<<endl;
 //ms.erase(2);//removing all instance of element from multiset
    // it will remove all instance of value 10
 cout<<ms.count(2)<<"\n";
 for(auto it=ms.begin();it!=ms.end();++it){
   cout<<*it<<" ";
 }
 //key value concept
 /*nav->27,him->31,har->67,gau->89*/
 //map only store unique keys
// time complexity islog(n)
 map<string,int >mpp;
 mpp["nav"]=27;
 mpp["him"]=31;
 mpp["har"]=67;
 mpp["gau"]=89;
 mpp["nav"]=29;
 //simple way to print array
 for(auto it:mpp){
   cout<<it.first<<" "<<it.second<<endl;
 }
 mpp.emplace("viv",45);
 for(auto it:mpp){
   cout<<it.first<<" "<<it.second<<endl;
 }
 unordered_map<int,int>mp;
 //unordered_map<pair<int,int>,int>mpp is not possible;
 //O(1) in almost all case and O(n) in the worst case 
 //Pair class
 pair<int ,int>pr={1,2};
 pair<pair<int,int>,int>pt={{3,9},8};
 cout<<pt.first.second<<endl;
 pair<pair<int,int>,pair<int,int>>p={{2,4},{6,8}};
 cout<<p.second.first<<"\n";
 vector<pair<int,int>>vec;
 set<pair<int,int>>s;
 map<pair<int,int>,int>ma;
 //stack Queue
 stack<int>st3;   //LIFO DS
 //Queue fifo,push,front,pop,size,empty
 queue<int>q;
 q.push(1);
 q.push(2);
 q.push(3);
 q.push(4);
 q.push(5);
 cout<<q.front()<<"\n";
 q.pop();
 //cout<<q.front();
 while(!q.empty()){
   q.pop();
 }
 //priority queue  is stored maximum is top
 //push,size.top pop empty
 priority_queue<int>pq;
 pq.push(1);
 pq.push(5);
 pq.push(2);
 pq.push(6);
 cout<<pq.top()<<"\n";
 pq.pop();
 cout<<pq.top()<<"\n";
//  priority_queue<pair<int,int>>pq;
//  pq.push(1,5);
//  pq.push(1,6);
//  pq.push(1,7);
//  //cout<<pq.top().first.first;
//  priority_queue<int>pq;
//  pq.push(-1);
//  pq.push(-5);
//  pq.push(-2);
//  pq.push(-6);
//  cout<<-1*pq.top()<<endl;

//  //minimum priority queue is 
//  priority_queue<int ,vector<int>,greater<int>>pq;
//  pq.push(1);
//  pq.push(5);
//  pq.push(2);
//  pq.push(6);
//  cout<<pq.top()<<endl;
//  //dequeue  push_front(),push_back(),pop_front(),pop_back(),begin(),end(),rbegin(),rend(),size,clear,empty  
//  // list all operation in dequeue
//  list<int>ls;
//  ls.push_front(1);
//  ls.push_front(2);
//  ls.push_front(3);
//  ls.remove(2);   //->   O(1)
 // Given N element ,print the element that occurs maximum number of times
   //5
   //1 3 3 3 2
    
 int n;
 cin>>n;
 map<int,int>m;
 int maxi=0;
 for (int i = 0; i < n; i++)
 {
   int x;
   cin>>x;
   m[x]++;
   if(m[x]>m[maxi]){
      maxi=x;
   }
 }
 cout<<maxi<<endl;
 // given N element , print all element in stored order 
 // N=6
 // 6 6 3 2 2 3 
// int t;
// cin>>t;
// multiset<int>ms1;
// for(int i =0;i<t;i++){
//    int y;
//    cin>>y;
//    ms1.insert(y);
// }
// for(auto it:ms1){
//    cout<<it<<endl;
// }
 




  




    return 0;
}