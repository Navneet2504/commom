#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[200];
    int n, m, i, j, k = 0;
    printf("NAME = NAVNEET SAVITA\n");
    printf("ROLL NO. = 2100320120117\n");
    printf("enter the elements of set 1:\n");
    scanf("%d ", &n);
    printf("ENTER THE element of set 1");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the elements of set 2:\n");
    scanf("%d ", &m);
     printf("ENTER THE element of set 1");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < n; i++)
    {
        arr3[k] = arr1[i];
        k++;
    }
    for (i = 0; i < n; i++)
    {
        int f = 0;
        for (j = 0; j < m; j++)
        {
            if (arr2[i] == arr3[j])
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            arr3[k] = arr2[i];
            k++;
        }
    }
    printf(" This is the union of set1 & set 2:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
}
