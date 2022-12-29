#include<stdio.h>
#include<stdlib.h>
#define size 2
int fro=-1,r=-1;
int q[size];
void insert(){
    if(r==size-1){
         printf("overflow\n");
     }
     else{
        if(fro==-1)
        fro=0;
       r=r+1;
       int x;
       printf("insert item: \n");
       scanf("%d",&x);
    q[r]=x;
    printf("r: %d\n",r); 
    }
      
}
void show(){
    if(fro==-1){
        printf("Queue is empty/n");
    }
    printf("element of queue: ");
    for(int i=fro;i<=r;i++){
        printf("%d ",q[i]);
        printf("\n");
    }
}
void del(){
    int m;
    if(fro==-1&& r==-1){
        printf("Queue is empty \n"); 
    }
    //fro=0;
    if(fro>r){
        printf("queue is empty:\n");
        fro=r=-1;
    }
    else{
    m=q[fro];
    fro++;
    printf("delete : %d  ",m);
    }

}
int main(){
    int choice=1;
   while (choice !=4)
    {
      printf("Press 1.Insert element to queue \n");
      printf("Press 2.Display elements of queue \n");
      printf("Press 3.Deleltion elements of queue \n");
      printf("Press 4.Quit \n");
      printf("Enter your choice : ");
      scanf("%d", &choice);
      switch (choice){
        case 1:
            insert();
            break;
        case 2:
            show();
            break;
        case 3:
            del();
            break;
        case 4:
            break;
        default:
         printf("Wrong choice ");
      }
}
}