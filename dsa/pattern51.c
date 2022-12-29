#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   printf("pattern \n");
   for(int i=0;i<n;i++)
   {  
      for(int j='E'-i;j<='E';j++)
      {
         printf("%c",j);
      }
      printf("\n");
   }
   
}