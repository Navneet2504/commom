#include"linklist.h"

int main(){
    Node*list1=initialize();
    insert_beg(&list1,10);
    insert_beg(&list1,20);
    insert_beg(&list1,30);
    insert_beg(&list1,40);
    insert_beg(&list1,50);
    insert_last(&list1,70);
    show(list1);
    printf("\n");
   // del(&list1);
    del_last(&list1);
    printf("\n");
    show(list1);
}