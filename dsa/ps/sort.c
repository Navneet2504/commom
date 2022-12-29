#include<stdio.h>
int main(){
    int s,i,j,temp;
    int arr[5]={2,5,4,3,1};
   /* printf("size");
    scanf("%d",&s);
    printf("enter the element of array");
    for(i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }*/
    for ( i = 0; i < s; i++)
    {
    for(j=0;j<s-1-i;j++){
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    printf("sorter arr\n");
    for(i=0;i<s-1;i++)
    {
        printf("%d ",arr[i]);
    }
    
    }