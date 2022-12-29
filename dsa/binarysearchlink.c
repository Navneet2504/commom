#include"linklist.h"
Node*middle(Node*start,Node*last){
    Node*slow=start;
    Node*fast=start->next
    while(fast!=last){
        fast=fast->next;
        if(fast!=last){
            fast=fast->next;
            slow=slow->next;
        }
    }
   return slow;
}
Node*binarysearch(Node*start,int value){
    Node*last=NULL;
    do{
        Node*mid=middle(start,last);
        if(mid==NULL){
            return NULL;
        }
        if(mid->val==value){
            return mid;
        }
        if(mid->val<value){
            start=mid->next;
        }
        else{
            last=mid;
        }
    }while(last!=NULL||start!=last);
    return NULL;
}
int main(){
    Node*st1=initialize();
    //Node*st2=initialize();
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
    

}