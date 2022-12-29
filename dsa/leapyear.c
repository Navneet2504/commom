#include<stdio.h>
void leapyear(int y){
    if((y%4==0)&&((y%400==0)||(y%100!=0))){
        printf("leapyear");
    }
    else{
        printf("not leapyear");
    }
}
int main()
{
    int y;
    printf("enter the year");
    scanf("%d",&y);
    leapyear(y);
}