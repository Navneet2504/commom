#include<stdio.h>
#include"myheader.h"
int main(){
    int a,b,c;
    a=5,b=10;
    c=sum(a,b);
    int s=sub(a,b);
    int m=mul(a,b);
    int d=div(a,b);
    printf("Sum :%d\n",c);
    printf("sub :%d\n",s);
    printf("mul :%d\n",m);
    printf("Division :%f\n",d);
}