//program to split to a linklist from a given position 
#include"linklist.h"
int main(){
    Node*st1=initialize();
    Node*st2=initialize();
    insert_beg(&st1,10);
    insert_last(&st1,20);
    insert_last(&st1,30);
    insert_last(&st1,40);
    insert_last(&st1,50);
    insert_last(&st1,60);
    insert_last(&st1,70);
    insert_last(&st1,80);
    insert_last(&st1,90);
    insert_last(&st1,100);
    int pos;
    scanf("%d",&pos);
    int c=1;
    Node*temp=st1;
    while(temp->next!=NULL){
        if(c==pos){
            st2=temp->next;
            temp->next=NULL;
            break;
        }
        c++;
         temp=temp->next;
    }
    show(st1);
    show(st2);
}