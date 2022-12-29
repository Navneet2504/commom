#include <stdio.h>
void inter(int seta[], int n, int setb[], int m)
{
    int i = 0, j = 0, k = 0;
    int setc[m];
    while (i < n && j < m)
    {
        if (seta[i] < setb[j])
        {
            i++;
        }
        else if (seta[i] > setb[j])
        {
            j++;
        }
        else
        {
            setc[k++] = seta[i++];
            j++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ",setc[i]);
    }
    
}
int main()
{   printf("Name: Navneet Savita(CS-B)\nRoll no. 2100320120117\n ");
    int seta[5] = {1, 5, 6, 8, 9};
    int setb[5] = {5, 6, 44, 45};
    printf("Intersection of two sets :");
    inter(seta, 5, setb, 5);
}