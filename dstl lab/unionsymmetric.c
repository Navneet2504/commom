#include <stdio.h>
int main()
{
    int i, j, m, n, f = 0, k = 0, g = 0, p = 0;
    int a[100], b[100], c[100], d[100], h[100];
    printf(" Name:-NAVNEET SAVITA \n");
    printf("Roll no.:-2100320120117 \n");
    printf("enter the size of seta");
    scanf("%d", &m);
    printf("Enter the element of seta");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the size of setb");
    scanf("%d", &n);
    printf("Enter the element of setb");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            if (a[i] == b[j])
            {
                f = 1;
                break;
            }
            else
            {
                f = 0;
            }
        }

        if (f == 0)
        {
            c[k] = a[i];
            k++;
        }
    }

    printf("Difference operation on set a&b (A-B) \n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            if (b[i] == a[j])
            {
                f = 1;
                break;
            }
            else
            {
                f = 0;
            }
        }

        if (f == 0)
        {
            d[g] = b[i];
            g++;
        }
    }

    printf("Difference operation on set a&b (B-A) \n");
    for (i = 0; i < g; i++)
    {
        printf("%d ", d[i]);
    }
    printf("\n");
    for (i = 0; i < k; i++)
    {
        h[p] = c[i];
        p++;
    }
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < g; j++)
        {
            if (d[j] == h[i])
            {
                f = 1;
                break;
            }
            else
            {
                f = 0;
                
            }

            if (f == 0)
            {
                h[p] = d[j];
                p++;
            }
        }
       
    }
    printf(" Symmetric difference union(A-B)Union(B-A)\n");
    for (i = 0; i < p; i++)
    {
        printf("%d ", h[i]);
    }
    return 0;
}
