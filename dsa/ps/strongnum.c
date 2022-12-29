#include <stdio.h>
 long long int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
void strong(int num)
{
    int r, sum = 0;
    int temp=num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + fact(r);
        num /= 10;
    }
    if (temp==sum)
    {
        printf("STRONG NUMBER");
    }
    else
    {
        printf("NOT STRONG");
    }
}
int main()
{
    int num;
    long long int m;
    printf("enter the number\n");
    scanf("%d", &num);
     m=fact(num);
     printf("%lld",m);
    strong(num);
}