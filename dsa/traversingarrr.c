#include<stdio.h>
int main()
{
    int i,n;
    int arr[20];
    printf("Name: Navneet Savita(CS-B)\nRoll no. 2100320120117\n ");
    printf("enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the element of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("your array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}