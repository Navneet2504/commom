#include <stdio.h>
void cor(int a, int b)
{
    if (a > 0 && b > 0)
    {
        printf("first cordinate");
    }
    else if (a < 0 && b > 0)
    {
        printf("second cordinate");
    }
    else if (a < 0 && b < 0)
    {
        printf("third cordinate");
    }
    else if (a > 0 && b < 0)
    {
        printf("fourth cordinate");
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    cor(a, b);
    return 0;
}
