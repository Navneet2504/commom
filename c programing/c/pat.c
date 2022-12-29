#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter the number of row");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            
        
        printf("%c",96+i);
        printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}