#include <stdio.h>

void main()
{
    int i, j, a[10][10], b[10][10], n, m, p, q, c[10][10], t;
    printf("enter the number of row and collumn of 1st matrix\n ");
    scanf("%d%d", &n, &m);
    printf("enter the elements\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
    }
    printf("enter the number of row and collumn of 2nd matrix\n ");
    scanf("%d%d",&p,&q);
    printf("enter the elements\n");
    
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
            scanf("%d", &b[i][j]);
    }
    if (n == p)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (t = 0; t < n; t++)
                {
                    c[i][j] = c[i][j] + a[i][t] * b[t][j];
                }
            }
        }
    }
    else
    {
        printf("multiplication is not possible");
    }
    printf("multiplication\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("\t% d", c[i][j]);
        }
        printf("\n");
    }
}