#include<stdio.h>
int acker(int m,int n){
    if(m==0){
        return (n+1);
    }
    else if(m>0&&n==0){
        return acker(m-1,1);
    }
    else{
        if(m>0&&n>0){
           return acker((m-1),acker(m,(n-1)));
        }
    }
}
int main(){
  int m,n,c;
  printf("NEERAJ PATEL \n");
    printf("2100320120118 \n");
    printf("Enter the Value: ");
  scanf("%d%d",&m,&n);
  c=acker(m,n);
  printf("%d",c);
  return 0;
}