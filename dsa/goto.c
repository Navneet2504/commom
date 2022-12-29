#include<stdio.h>
void main(){
    int n=16;
    int temp=n;
    int i=-5;
    NAVNEET:
    printf("%d ",temp);
    temp=temp+i;
    if(temp<=0)
    i=5;
    if (temp<=n)
    goto NAVNEET;

}