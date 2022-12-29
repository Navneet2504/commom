#include<stdio.h>
void perfect(int num){
    int x,sum=0;
    x=num/2;
    while (x>0)
    {  
      if(num%x==0){
      sum=sum+x;
    }
    x--;
    }
    if(sum==num){
        printf("number is perfect");
    }
else{
    printf("Not perfect");
}
}
int main(){
    int num,x,sum=0,r;
    printf("Enter the number");
    scanf("%d",&num);
    perfect(num);
    
}