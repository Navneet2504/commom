#include <stdio.h>
int main()
{
  int a[10][10], b[10][10], sum[10][10], r, c, i, j;
  printf("enter the row and column:-");
  scanf("%d%d", &r, &c);
  printf("enter the element of first matrix");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("enter the element of second matrix");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  printf("sum of matrixes\n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      sum[i][j] = a[i][j] + b[i][j];
      printf("%d\t", sum[i][j]);
    }
    printf("\n");
    
  }
}