#include<stdio.h>
void delete(int arr[],int v,int s){
    int flag=0;
    for(int i=0;i<s;i++){
        if (arr[i]==v){
            flag=1;
        }
      // if(i==s){
           // break;
        
        if(flag==1){
            arr[i]=arr[i+1];
        }
    }
        for (int i = 0;i<s-1;i++)
    {
       printf("% d",arr[i]);
    }
    
    
}
int main()
{
    int v;
    int arr[10]={10,1,2,3,45,13,46,50,56,40};
    printf("Name: Navneet Savita(CS-B)\nRoll no. 2100320120117\n ");
    printf("enter the deletion element");
    scanf("%d",&v);
    delete(arr,v,10);

}