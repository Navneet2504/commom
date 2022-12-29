#include<stdio.h>
int main (){
     int n;
     //printf("enter the no. of row");
     scanf("%d",&n);
     int i,j;
     for(i=1;i<=n;i++)
     {
        for(j=i;j<2*i;j++)
        {
            printf("%d",j);
           // printf("%c",64+i);
            printf(" ");
          //  printf("\n");
        }
         printf("\n");
     }
}