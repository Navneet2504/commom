#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        //for(j=i;j<2*i;j++)
        {
            printf("%c",64+j);
         // printf("%c",65+j);

        }
        printf("\n");
    }
}