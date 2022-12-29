// By Zeller's Rule
// F=K + [(13*M -1)/5] + D + [D/4] + [C/4] - 2C
#include<stdio.h>
int day(int MM)
{
    return MM>=3?MM-2:MM+10;
}
int main()
{
    int mm,dd,yy;
    int C,D,M,K,F;
    printf("enter your DOB(dd/mm/yy/)");
    scanf("%d %d %d",&dd,&mm,&yy);
    K=dd;
    D=yy%100;
    C=yy/100;
    M=day(mm);
     F = K + ((13 *M - 1) / 5) + D + (D / 4) + (C / 4) - 5* C;
     printf("%d",F);
     switch(F%7)
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
        printf("THURSDAY");
        break;
        case 5:
        printf("FRIDAY");
        break;
        case 6:
        printf("SATURDAY");
        break;
    
    
    }

}