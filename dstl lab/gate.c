#include<stdio.h>
void main()
{
    printf("NEERAJ PATEL\n2100320120118");
 int a[2][2],b[2][2],c[2];
 int i,j;
 for(i=0;i<=1;i++)
 {
 for(j=0;j<=1;j++)
  {
   a[i][j]=(i&&j);
   b[i][j]=(i||j);
  }
 }

 for(i=0;i<=1;i++)
 {
 c[i]=(!i);
 }

 printf("\nThe Truth Table for AND Gate :\n");
 printf("   A    B     :    A and B\n");
for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
    printf("   %d    %d     :    %d\n",i,j,a[i][j]);
   }
 }
 printf("\nThe Truth Table for OR Gate :\n");
 printf("   A    B     :    A or B\n");
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
    printf("   %d    %d     :    %d\n",i,j,b[i][j]);
   }
 }
 printf("\nThe Truth Table for NOT Gate :\n");
 printf("   A   :  not A\n");
 for(i=0;i<=1;i++)
 {
   printf("   %d   :  %d\n",i,c[i]);
 }
}

