#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	    int a[m];
	    int b[101]={0};
	    for(int i=0;i<m;i++){
	        cin>>a[i];
	    }
	    map<int,int>mpp;
	    for(int i=0;i<m;i++){
	        mpp[a[i]]++;
	    }
	    int c=1;
	    for(auto it:mpp){
	        if(it.second%2!=0){
	            cout<<"no"<<endl;
	            c=0;
	            break;
	        }
	    }
	    if(c){
	        cout<<"yes"<<"\n";
	    }
	}
		return 0;
	}
	    