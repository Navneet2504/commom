#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,A[10],B[10],i,j;
    printf("NAVNEET SAVITA \n");
    printf("2100320120117\n");
    printf("Enter the no. of elements of set1 \n");
    scanf("%d",&m);
    printf("Enter the elements:\n");
    for(i=0;i<m;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter the no. of elements of set2 \n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
 for(i=0;i<n;i++){
        scanf("%d",&B[i]);
    }
    printf("The Cartesian product is-\n");
    printf("{");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("{%d,%d},",A[i],B[j]);
  }}
    printf("\b");
    printf("}");
 return 0;
}
