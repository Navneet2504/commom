#include <stdio.h>
int meadian(int a[], int s)
{
    int i, j, temp;
    float med;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    if (s % 2 == 0)
    {
        med = (a[(s / 2)] + a[(s / 2) + 1]) / 2;
    }
    else
    {
        med = (a[(s) / 2]);
    }
    return med;
}
int main()
{
    int s = 5;
    int a[5] = {2,7,3,1,6};
    int w = meadian(a, s);
    printf("%d", w);
    return 0;
}