#include<stdio.h>
#include<stdint.h>
int main()
{
    int arr[10]={1,2,33,4,5,6,56,41,8,9};
    int sum,address;
    int a;
    address=(intptr_t)arr;
    printf("%d\n",address);
   // scanf("%u",&ba);
     a=(intptr_t)&arr[2];
     printf("%d\n",a);
    sum=address+(3)*sizeof(int);
    if(sum==(intptr_t)&arr[2])
    {
        printf("checked");
    }
    else
    {
        printf("wrong");
    }
    return 0;
}
