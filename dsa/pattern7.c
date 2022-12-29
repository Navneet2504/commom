#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   printf("pattern \n");
   for(int i=1;i<=n;i++)
   {  
      for(int j=n-1;j>=i;j--)
      {
         printf(" ");
      }
         for(int k=0;k<i;k++){
            printf("%d",k+i);
          //  printf("*");
         }
         int b=i-1;
         int c=2*i-2;
         while(b>=1){
            printf("%d",c);
            c--;
            b--;
         }
        
      
      printf("\n");
   }
   
}