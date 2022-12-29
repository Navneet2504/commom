#include<stdio.h>
 void main()
 {
     int r;
     float area ,pi=3.14;
     float s;
     printf("enter radius of circle",r);
     scanf("%d",&r);
     area=pi*r*r;
     s=2*pi*r;
     printf("%f area of circle",area);
     printf("\n");
     printf("%f circumfrence of circle",s);
 }