#include"stdio.h"
int main()
{
    int n;
    int max=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int  i = 0; i <n; i++)
    {
       if(a[i]>max){
        max=a[i];
       }
    }
    printf("maximum element of array \n");
    printf("%d",max);

    }