#include <stdio.h>
int main()
{
    int i, j, m, n, f = 0, k = 0;
    int a[100], b[100], c[100];
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
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else if (b[j] < a[i])
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else
        {
            i++;
            j++;
        }
    }
    /* while (i < n) {
         printf("%d ",a[i]);
         i++;
     }
     while (j < m) {
         printf("%d ",b[j]);
         j++;
     }*/

    printf("%d", k);
    printf("Difference operation on set a&b \n");
    while (i < k)
    {
        printf("%d ", c[i]);
        k++;
    }
    return 0;
}