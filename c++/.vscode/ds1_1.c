#include<stdio.h>
void large(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);

        }
        else{
            printf("%d",c);

        }
    }
        else if(b>c)
        {
            printf("%d",b);

        }
        else
        {
            printf("%d",c);
        }
    }

int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
   // printf(" large=%d",large num);
    large(a,b,c);
    return 0;
    
}