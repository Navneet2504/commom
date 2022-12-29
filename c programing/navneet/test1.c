#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,c;
	    int p=0;
	    int sum=0;
	    scanf("%d%d%d",&n,&x,&c);
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        if((x-arr[i])>c){
	        arr[i]=x;
	   
	        p++;}
	    sum=sum+arr[i];
	        
	    }
	   p=p*c;
	    sum=sum-p;
	   // printf("%d",p);
	    printf("%d\n",sum);
	}
	return 0;
}