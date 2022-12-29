#include<stdio.h>
int main()
{
   int n;
   int j;
   scanf("%d",&n);
   //printf("pattern \n");
   for(int i=1;i<=n;i++)
   {  
      for(int j=1;j<=i;j++)
      {
         printf("%d",j);
      }
         
      printf("\n");
      for(int s=1; s<=(2*n-2*i);s++){
        printf(" ");
      }
      for(int k=(j-1);k>=1;k--){
        printf("%d",k);
      }
      //printf("\n");
   }
   
   
}