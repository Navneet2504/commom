#include<stdio.h>  
 void main()  
 {  
printf("NAVNEET SAVITA\n");
 printf("ROLL NO.=2100320120117\n");
int a[100], b[100], i, j, c[100], k, n, m;   
printf("Enter the size of first array. "); 
  scanf("%d", &m);  
 printf("Enter %d elements of first sorted array. ", m); 
  for(i=0;i<m;i++)  
 {  
 scanf("%d", &a[i]);  
 }  
 printf("Enter the size of second array. ");  
 scanf("%d", &n);  
 printf("Enter %d elements of second sorted array. ", n);  
 for(j=0;j<n;j++)  
 {  
  scanf("%d", &b[j]); 
 }  
 i=j=0;  
 for(k=0;k<m+n;k++)  
{  
if(i<m && j<n)  
{  if(a[i]<b[j])  
{  
c[k]=a[i];  
i++;  
}  
else  
{  
c[k]=b[j];  
j++;  
}  }  
  	 else if(i<m)  
 {  
   	c[k]=a[i];    
 
i++;
}
else
{
c[k]=b[j];    
   j++;  
 }  
 }  
printf("Merged array is\n");  
 for(k=0;k<m+n;k++)  
 {  
 printf("%d ", c[k]);  
}  
} 
