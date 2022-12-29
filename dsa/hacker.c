#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int fnt(int n,int a,int b,int c) {
  //Write your code here.
  int a,b,c;
  if(n==1){
      return a;
  }
  else if(n==2){
      return b;
  }
  else if(n==3){
      return c;
  }
  else{
      return fnt((n-1),a,b,c)+fnt((n-2),a,b,c)+fnt((n-3),a,b,c);
  }
  }


int main() {
    int n, a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d",&a, &b, &c);
    int ans = fnt(n,a,b,c);
    printf("%d", ans); 
    return 0;
}