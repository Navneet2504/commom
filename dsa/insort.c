#include<stdio.h>
int insert(int arr[],int count,int n){
    int temp=count;
    arr[temp]=n;
    while(temp>0){
        if(arr[temp]>=arr[temp-1])
        break;
        else{
            int c=arr[temp];
            arr[temp]=arr[temp-1];
            arr[temp-1]=c;
        }
        temp--;
    }
}
int main(){
   int count=10;
    int n;
    printf("Name: Navneet Savita(CS-B)\nRoll no. 2100320120117\n ");
    printf("enter the insert no.");
    scanf("%d",&n);
    int arr[15]={10,15,20,25,30,35,40,45,50,55};
    insert(arr,count,n);
    for(int i=0;i<15;i++){
        printf("%d, ",arr[i]);
    }
}