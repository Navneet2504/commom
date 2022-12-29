#include"linklist.h"
void helper(Node**start,Node*newnode){
    if((newnode->val)<((*start)->val)){
        newnode->next=*start;
        *start=newnode;
    }
    else{
        Node*curr=(*start)->next;
        Node*prev=*start;
        while (curr!=NULL)
        {
            if((curr->val)>(newnode->val)){
                break;
            }
            curr=curr->next;
            prev=prev->next;
        }
        newnode->next=prev->next;
        prev->next=newnode;
        
    }
}
void sortlist(Node**st1){
    Node*st2=*st1;
    *st1=(*st1)->next;
    st2->next=NULL;
    while (*st1!=NULL)
    {
        Node*temp=*st1;
        *st1=(*st1)->next;
        temp->next=NULL;
        helper(&st2,temp);
    }
    *st1=st2;
    
}
int main(){
    Node*st1=initialize();
    insert_beg(&st1,9);
    insert_last(&st1,7);
    insert_last(&st1,2);
    insert_last(&st1,5);
    insert_last(&st1,4);
    printf("Before Sorting \n");
    show(st1);
    printf("\n");
    sortlist(&st1);
    printf("After Sorting \n");
    show(st1);
    
}