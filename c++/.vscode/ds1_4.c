#include<stdio.h>
char findresult(int q)
{
    if(q<0){
        printf("freez");
    }
    else if(q<10){
        printf("vcold");
    }
    else if(q<20)
    {
        printf("cold");
    }
    else if(q<30){
        printf("normal");
    }
    else if(q<40){
       printf("hot"); 
    }
    else{
    printf("v hot");
    }

}
int main(){
    int q;
    printf("enter the the number");
    scanf("%d",&q);
    findresult(q);

}