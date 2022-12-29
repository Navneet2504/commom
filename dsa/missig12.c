#include<stdio.h>
int missing(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    return (n*(n+1)/2)-s;

}
int main(){
    printf("Name: Navneet Savita(CS-B)\nRoll no. 2100320120117\n ");
    int arr[4];
    int i;
    printf("enter the element of array\n");
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
printf("The missing no is :\n");
 int b = missing(arr,5);
 printf("%d",b);
}
