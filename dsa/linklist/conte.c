#include"linklist.h"
int main(){
    Node*st1=initialize();
    Node*st2=initialize();
    insert_beg(&st1,10);
    insert_beg(&st1,20);
    insert_beg(&st1,30);
    insert_beg(&st1,40);
    insert_beg(&st1,50);
    show(st1);
    printf("\n");
    insert_beg(&st2,60);
    insert_beg(&st2,70);
    insert_beg(&st2,80);
    show(st2);
    printf("\n");
    Node*temp=st1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=st2;
    show(st1);

}