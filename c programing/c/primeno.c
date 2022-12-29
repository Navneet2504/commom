#include <stdio.h>
int main()
{
    int i, n;
    // printf("enter the number");
    // scanf("%d", &n);
    for (int j = 2; j <= 300; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }

        if (i == j)
            printf("%d ", j);
    }

    return 0;
}