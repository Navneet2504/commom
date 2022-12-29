#include <stdio.h>
int main()
{
    int m, n, i, j;
    int k = 0;
    int seta[m];
    int setb[n]; 
    int setc[k];
    printf("enter the size of seta");
    scanf("%d", &m);
    printf("enter the element of seta");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &seta[i]);
    }
    printf("enter the size of setb");
    scanf("%d", &n);
    printf("enter the element of setb");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &setb[i]);
    }
    for (i = 0; i < m; i++)
    {
        setc[k] = seta[i];
        k++;
    }
    for (i = 0; i < m; i++)
    { int f=0;
        for (j = 0; j < n; j++)
        {
            if (setb[i] == setc[j])
            {
                f = 1;
            } 
        }
        if(f==0){
            setc[k]=setb[i];
            k++;
        }
    }
    printf("A union B");
    for (i = 0; i < k; i++)
    {
        printf("%d", setc[i]);
        printf("\n");
    }
    return 0;
}