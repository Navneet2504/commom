#include <stdio.h>
int main()
{
    int n, r, c;
    printf("Enter number of rows");
        scanf("%d", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = r; c >= 1; c--)
        {
            printf("%d",c);
            
             printf("\t");
        }
        printf("\n");
    }
    return 0;
}