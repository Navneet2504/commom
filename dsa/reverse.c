#include <stdio.h>
int main()
{
    int array[100], n, c, t, end;
    printf("Name: Navneet Savita(CS-B)\nRoll no. 2100320120117\n ");
    printf("enter the size of array\n");
    scanf("%d", &n);
    end = n - 1;
    printf("enter the element of array\n");
    
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }
    
    for (c = 0; c < n/2; c++) {
        t = array[c];
        array[c] = array[end];
        array[end] = t;    
        end--;
    }
    
    printf("Reversed array elements are:\n");
    
    for (c = 0; c < n; c++) {
        printf("%d ", array[c]);
    }
}
