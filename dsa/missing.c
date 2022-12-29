#include <stdio.h>

int miss(int arr[], int s)
{
    int i;
    for (i = 1; i <= s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (i == arr[j])
            {
                break;
            }
        }
    }
    return i;
}
int main()
{
    int arr[4] = {1, 2, 3, 5};
    int ds = miss(arr, 4);
    printf("%d", ds);
    
}