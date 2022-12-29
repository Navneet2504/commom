 #include<stdio.h>
 #include<stdlib.h>
 struct list{
    int data;
    struct list *next;
 };
 struct list * insert_begin(struct list *start,int data){
  struct list*ptr=(struct list *)malloc(sizeof(struct list));
   ptr->next=start;
   ptr->data=data;
   return ptr;
 }
 //between insert O(n)
  struct list * insert_between(struct list *start,int data,int index){
   struct list*ptr=(struct list *)malloc(sizeof(struct list));
    struct list *p=start;
    int i=0;
    while(i!=index-1){
      p=p->next;
      i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return start;
  }
  //insert_end O(n)
  struct list *insert_at_end(struct list*start,int data){
   struct list *ptr=(struct list *)malloc(sizeof(struct list));
   ptr->data=data;
   struct list*p=start;
    while(p->next!=NULL){
      p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return start;
  }
  //insert_node O(1)
  struct list *insert_node(struct list*start,struct list*prenode,int data){
   struct list *ptr=(struct list *)malloc(sizeof(struct list));
   ptr->data=data;
    ptr->next=prenode->next;
    prenode->next=ptr;
    return start;
  }
 void list_traversal(struct list *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
 }
 struct list*delete_begin(struct list*start){
   struct list*ptr=start;
   start=start->next;
   free(ptr);
   return start;
 }
  struct list*delete_at_index(struct list*start,int index){
   struct list*ptr1=start;
   struct list*ptr2=start->next;
   for(int i=0;i<index-1;i++){
      ptr1=ptr1->next;
      ptr2=ptr2 ->next;
   }
   ptr1->next=ptr2->next;
   free(ptr2);
   return start;
 }
 struct list*delete_at_given_value(struct list*start,int value){
   struct list*ptr1=start;
   struct list*ptr2=start->next;
   while(ptr2->data!=value&&ptr2->next!=NULL){
      ptr1=ptr1->next;
      ptr2=ptr2->next;

   }
   if(ptr2->data==value){
      ptr1->next=ptr2->next;
      free(ptr2);
   }
   return start;
 }
 struct list*delete_at_last(struct list*start){
   struct list*p=start;
   struct list*q=start->next;
   while(q->next!=NULL){
      p=p->next;
      q=q->next;
   }
   p->next=NULL;
   free(q);
   return start;
 }

 int main(){
    struct list*start;
    struct list*second;
    struct list*third;
    struct list*fourth;
    struct list*five;
    struct list*six;
    struct list*seven;
    struct list*eight;
    struct list*nine;
    struct list*ten;
    start=(struct list*)malloc(sizeof(struct list));
    second=(struct list*)malloc(sizeof(struct list));
    third=(struct list*)malloc(sizeof(struct list));
    fourth=(struct list*)malloc(sizeof(struct list));
    five=(struct list*)malloc(sizeof(struct list));
    six=(struct list*)malloc(sizeof(struct list));
    seven=(struct list*)malloc(sizeof(struct list));
    eight=(struct list*)malloc(sizeof(struct list));
    nine=(struct list*)malloc(sizeof(struct list));
    ten=(struct list*)malloc(sizeof(struct list));
   //link start and second node
   start->data=10;
   start->next=second;
   second->data=20;
   second->next=third;
   third->data=30;
   third->next=fourth;
   fourth->data=40;
   fourth->next=five;
   five->data=50;
   five->next=six;
   six->data=60;
   six->next=seven;
   seven->data=70;
   seven->next=eight;
   eight->data=80;
   eight->next=nine;
   nine->data=90;
   nine->next=ten;
   ten->data=100;
   ten->next=NULL;
    list_traversal(start);
 //start=delete_begin(start);
 //start=delete_at_given_value(start,2);
 //start=delete_at_last(start);
 //printf("\n");
 //list_traversal(start);
      printf("\n");
      int n;
   printf("Enter the element :");
   scanf("%d",&n);
   // start=insert_begin(start,500);
   // start=insert_between(start,45,5);
   //start=insert_at_end(start,12);
   start=insert_node(start,20,n);
    printf("\n");
    list_traversal(start);






 }
