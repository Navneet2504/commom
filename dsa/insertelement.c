#include <stdio.h>
int main()
{
    int arr[20], s, n, p;
    printf("Name: Navneet Savita(CS-B)\nRoll no. 2100320120117\n ");
    printf("enter the size of array ");
    scanf("%d", &s);
    printf("enter the element of array");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the position");
    scanf("%d", &p);

    printf("enter the insertion element");
    scanf("%d", &n);
    for (int i = s; i >= p - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p - 1] = n;
    printf("array after insertion new element");
    for (int i = 0; i < s; i++)
    {
        printf("%d, ", arr[i]);
    }
}
