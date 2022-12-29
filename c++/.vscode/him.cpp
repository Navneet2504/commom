#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    long long arr[n];
	    int c=0;
	    cin>>n;
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	    }
	    for(int i=1;i<=n;i++){
	        for(int j=i+1; j<n;j++){
	            if(arr[i]==arr[j]){
	                c=c+1;
	            }
	        }
	        
	    }
	    cout<<c<<endl;
	}
	return 0;
}