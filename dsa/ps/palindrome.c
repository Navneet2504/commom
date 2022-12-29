#include<stdio.h>
int palin(int n){
    int rev=0,temp,r;
    temp=n;
    while(temp>0){
      rev=rev*10+(temp%10);
      temp/=10;

    }
   return(rev==n);
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",n);
    //palin(n);
    if (palin(n)==n)
    {
     printf("Palindrom");
    }
    else{
       printf(" not Palindrom"); 
    }
    
    return 0;


}