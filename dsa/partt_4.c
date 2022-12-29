#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=01;i<=n;i++)
   {
      for(int j=i;j<2*i;j++)
      {
         printf("%c",'A'+j-1);
      }
      printf("\n");
   }
   
}