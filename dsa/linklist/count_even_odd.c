//
#include"linklist.h"
int main(){
    Node*st1=initialize();
    insert_beg(&st1,10);
    insert_beg(&st1,20);
    insert_beg(&st1,30);
    insert_beg(&st1,40);
    insert_beg(&st1,50);
    int c=0;
    int c1=0;
    Node*temp=st1;
    while(temp!=NULL){
        if((temp->val)%2==0){
            c++;
        }
        else{
            c1++;
        }
        temp=temp->next;
    }
    printf("c:%d  C1: %d",c,c1);
}