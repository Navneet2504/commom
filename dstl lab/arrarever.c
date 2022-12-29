#include <stdio.h>
int main()
{
    int i,m;
    int a[100];
    printf("enter the size of seta");
    scanf("%d", &m);
    printf("Enter the element of seta");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=(m-1);i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}