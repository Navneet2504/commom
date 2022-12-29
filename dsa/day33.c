#include <stdio.h>
#include <math.h>
void findsum(int n)
{
    int x=2;
    float sum = 1;
    long long int fact = 1;
    float pow=1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        pow=pow*x;
        sum = sum + pow/ fact;
    }
    printf("sum=%f", sum);
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    findsum(n);
    return 0;
}