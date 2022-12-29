#include <stdio.h>
#include<math.h>
int main()
{
    float n,f=1,t=1,x,s;
    printf("enter the number");
    scanf("%f",&n);
    printf("enter the value of nominater");
    scanf("%f",&x);
    for (int i = 1; i <=n; i++)
    {
        f=f*i;
       int r=2*n;
       s=pow(-1,n-1);
        t=t+(s*pow(x,r))/f;
    }
        printf("sum opf series=%0.2f",t);

    return 0;
}