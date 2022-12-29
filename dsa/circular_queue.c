#include<stdio.h>
#define S 25
// fro=front,r=Rear,S=size,qu=Queue tpye array
int fro,r;
int cqu[S];
void insertcq(int m){
    printf("Insert item:");
    scanf("%d",&m);
    if(((r+1)%S==fro)){
        printf("Queue is full \n");
    }
    else if(fro==-1){
       fro=r=0;
       cqu[r]=m; 
    }
    else{
        r=(r+1)%S;
        cqu[r]=m;
    }
}
void delcq(){
    if(fro==-1){
        printf("Queue is empty \n");
    }
    else if(fro==r){
        printf("Delete Element :%d \n",cqu[fro]);
        fro=r=-1;
    }
    else{
        printf("Delete Element :%d \n",cqu[fro]);
        fro=(fro+1)%S;
    }
}
void show(){
    int i=fro;
    if(fro==-1){
        printf("Queue is empty \n");
    }
    else{
        printf("Queue element are:");
        while (i!=r)
        {   
            printf("%d ",cqu[i]);
            i=(i+1)%S;
        }
        printf("%d ",cqu[i]);
        
    }
}
int main(){
    fro=r=-1;
    int c;//choice
   while(c!=4){
    printf("\n1....For insertion\n");
    printf("2....For deletion\n");
    printf("3....For Show\n");
    printf("4....For out of program\n");
    printf("Enter your choice \n");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        insertcq(1);
        break;
    case 2:
        delcq();
        break;
    case 3:
        show();
        break;
    case 4:
        break;
    default:
        printf("invalid choice");
    }
   }
    return 0;
}