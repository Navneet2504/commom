#include<stdio.h>
int main(){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dd,mm,yy,leap;
    int tod,mday;
    int months[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
    scanf("%d %d %d",&dd,&mm,&yy);
    if(mm>2){
        leap=(yy)/4-(yy)/100+(yy)/400;
    }
    else{
        leap=(yy-1)/4-(yy-1)/100+(yy-1)/400;
    }
    mday=months[mm-1];
    tod=(yy-1)*365+leap+mday+dd;
    switch (tod%7)
    {
    case 0:
        printf("SUNDAY");
        break;
        case 1:
        printf("MONDAY");
        break;
        case 2:
        printf("TUESDAY");
        break;
        case 3:
        printf("WEDNESDAY");
        break;
        case 4:
        printf("THRUSDAY");
        break;
        case 5:
        printf("FRIDAY");
        break;
        case 6:
        printf("SATURADAY");
        break;
    }
    return 0;
}
