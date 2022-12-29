//linear search
#include"linklist.h"
void main(){
    Node*st1=initialize();
    insert_beg(&st1,10);
    insert_beg(&st1,20);
    insert_beg(&st1,30);
    insert_beg(&st1,40);
    insert_beg(&st1,50);
    int va;
    printf("value:  ");
    scanf("%d",&va);
    int f=0;
    Node*curr=st1;
    while(curr!=NULL){
        curr=curr->next;
        if(curr->val==va){
            printf("item found");
            return ;
        }
    }
    printf("Not Found");

}