#include <stdio.h>
int main()
{
    int a, b, c,big;
    printf("enter three numbers", a, b, c);
    scanf("%d%d%d", &a, &b, &c);
   big= (a > b) ? (a>c? a:c):(b>c? b:c);
   printf("largest numberis %d",big);
    return 0;
}