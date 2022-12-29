#include<stdio.h>
int digit(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+digit(n/10);
    }
}
int main(){
    int n,m;
    printf("enter the number\n");
    scanf("%d",&n);
   m=digit(n);
   printf("%d",m);
}