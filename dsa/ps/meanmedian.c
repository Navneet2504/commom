#include<stdio.h>
int mean(int arr[], int s)
{
 int sum = 0;
 double m;
for(int i=0;i<s;i++){
    sum=sum+arr[i];
}
 m=sum/s;   
  return m;
}
int main(){
    int arr[10],s,sum=0;
    printf("enter the size of arr");
    scanf("%d",&s);
    printf("enter the element of arr");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    int n=mean(arr,s);
    printf("mean");
    printf("%d",n);
}