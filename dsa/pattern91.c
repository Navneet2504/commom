#include <stdio.h>
int main()
{
   // int a[5]={5,1,15,20,25};
   int i, j, m, s;
   // i=++a[1];
   // j=a[1]++;
   // m=a[i++];
   // printf("%d %d %d",i,j,m);
   int num[6] = {3, 2, 1, 2, 3, 1};
   int freq[4] = {0};
   for (i = 0; i < s; i++)
   {
      freq[num[i]]++;
   }
   for (i = 0; i < 4; i++)
   {
      printf("%d ", freq[i]);
   }
   return 0;
}