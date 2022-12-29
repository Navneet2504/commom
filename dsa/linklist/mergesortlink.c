//find a middle node of any linklist
#include"linklist.h" 
 void split_list(Node *start,Node **list1,Node **list2){
    Node*fast=start->next;
    Node*slow=start;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    *list1=start;
    *list2=slow->next;
    slow->next=NULL;
 }
 Node* merge_sortedlist(Node*list1,Node*list2){
    Node*result;
    if(list1==NULL){
        return list2;
    }
    if(list2==NULL){
        return list1;
    }
    if(list1->val<=list2->val){
        result=list1;
        result->next=merge_sortedlist(list1->next,list2);
    }
    else{
        result=list2;
        result->next=merge_sortedlist(list1,list2->next);
    }
    return result;
 }
   
 void mergesort(Node**start){
    if(*start==NULL||(*start)->next==NULL){
        return;
    }
    Node*list1;
    Node*list2;
    split_list(*start,&list1,&list2);
    mergesort(&list1);
    mergesort(&list2);
    *start=merge_sortedlist(list1,list2);
 }
 int main(){
    Node *start=initialize();
    insert_last(&start,1);
    insert_last(&start,5);
    insert_last(&start,4);
    insert_last(&start,9);
    insert_last(&start,10);
    insert_last(&start,6);
    printf("\nBefore Sorting\n");
    show(start);
    mergesort(&start);
    printf("\n Sorted list:\n");
    show(start);
 }