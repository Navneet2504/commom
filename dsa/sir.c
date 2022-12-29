#include<stdio.h>
int main ()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);

    while(n!=0)
    {
    if(n<0)
    break;
    printf("enter number\n");
    scanf("%d",n);
    
    }
}