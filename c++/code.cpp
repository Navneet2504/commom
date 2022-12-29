#include<bits/stdc++.h>
using namespace std;
#define size 25
int fro,r;
int pq[size];
 void enque(int item){
    if((r+1)%size==fro){
        cout<<"full queue"<<endl;
        return ;
    }
    if(fro==-1){
        fro=r=0;
    }
    else{
        r=(r+1)%size;
        pq[r]=item;
    }
    for(int i=r;i!=fro;i=(i+size-1)%size){
        int pre=(i+size-1)%size;
        if(pq[i]>pq[pre]){
            swap(pq[i],pq[pre]);
        }
        cout<<"item inserted"<<endl;
    }
 }
 void delcq(){
    if(fro==-1&&r==-1){
        cout<<"Queue is empty"<<endl;
    }
    else if(fro==r){
        fro=r=-1;
    }
    else{
        cout<<"Delete Element"<<pq[fro]<<endl;;
        fro=(fro+1)%size;
    }
}
int main(){
  fro=r=-1;
  enque(15);
  enque(10);  
  enque(20);  
  enque(30);
  enque(50);  
  enque(40);  
  delcq();  
  delcq();  
}