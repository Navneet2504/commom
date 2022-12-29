#include <stdio.h>
int main()
{
  int a[100], t, n, i;
  printf("enter the number of element");
  scanf("%d", &n);
  printf("enter the element");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      if (a[j] > a[j + 1])
      {
        t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    printf("%d", a[i]);
  }
  return 0;
}