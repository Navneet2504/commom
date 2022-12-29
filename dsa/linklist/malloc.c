#include<stdio.h>
#include<malloc.h>
/*To insert any node at last if start is
NULL create a node and make a new node
else move toward end untill node of next is Null then assign a new node to the last node SO in worst case O(n)where as n best case O(1)*/
struct list
{
    int val;
    struct list *next;
};
struct list *start;
void add_beg()
{
  struct list *new_node;
  new_node=(struct list*)malloc(sizeof(struct list));
  printf("enter value ");
  scanf("%d",&new_node->val);
  new_node->next=NULL;
  if(start!=NULL)
{
  new_node->next=start;
}
start=new_node;
printf("node inserted at begninig\n");
}
 void insert(){
  struct list *new_node=(struct list*)malloc(sizeof(struct list));
  printf("Enter the value");
  scanf("%d",&new_node->val);
  new_node->next=NULL;
  if(start==NULL){
    start=new_node;
  }
  else{
    struct list *node=start;
    while(node->next!=NULL){
      node=node->next;
    }
    node->next=new_node;
  }
  printf("Node is insert at last\n");
 }
 void insert_at_pos(){
  int pos,flag=0;
  printf("Enter position");
  scanf("%d",&pos);
  if(start==NULL||pos==1){
    insert();
    return ;
  }
  else{
    int count =1;
    struct list *node=start;
    while (node->next!=NULL){
      if(count==pos-1){
        struct list *new_node=(struct list*)malloc(sizeof(struct list));
        printf("Enter the value of ");
        scanf("%d",&new_node->val);
        flag=1;
        new_node->next=node->next;
        node->next=new_node;
        printf("Node inserted at %d",pos);
      }
      node=node->next;
      count++;
    }
    if(!flag){
      insert();
      printf("Invalid position. Node inserted at least");
    }
  }
 }
 void insert_before_value(){
  int value,flag=0;
  //start==NULL;
   printf("Enter value to search :");
   scanf("%d",&value);
  struct list*node=start;
  if(start==NULL || start->val==value){
    flag=1;
    add_beg();
    return;
  }
  else{
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    printf("Enter data");
    scanf("%d",&newnode->val);
    struct list*prev=start;
    node=node->next;
    while(node!=NULL){
      if(node->val==value){
        flag=1;
        newnode->next=node;
        prev->next=newnode;
      }
      node=node->next;
      prev=prev->next;
    }
  }
  if(flag==0){
    printf("Value not found in linklist\n");
  }
 }
 void remove_beg(){
  int val;
  if(start==NULL){
    printf("Empty linklist");
    return;
  }
  val=start->val;
  start=start->next;
  printf("Delete Node %d value : \n",val);
 }
 void remove_lastnode(){
  if(start==NULL){
    printf("Empty\n");
    return;
  }
  if(start->next==NULL){
     start=NULL;
     return;
  }
  struct list *temp=start->next;
  struct list*p=start;
     while(temp->next!=NULL){
      temp=temp->next;
      p=p->next;
     }
     p->next=NULL;
     printf("%d deleted\n",temp->val);
     free(temp);
 }
 void remove_node_num(){
  int pos,f=0;
  printf("enter position\n");
  scanf("%d",&pos);
   struct list*node=start;
   if(start==NULL){
    printf("empty linklist\n");
    return;
   }
   if(pos==1){
    node=start;
    start=start->next;
    f=1;
   }
   else{
    int count=2;
    node=start->next;
    struct list*prev=start;
    while(node->next!=NULL){
      if(pos==count){
        f=1;
        prev->next=node->next;
        break;
      }
      else{
        count++;
        node=node->next;
        prev=prev->next;
      }
    }
   }
   if(f){
    printf("%d  Deleted \n",node->val);
    free(node);
   }
   else{
    printf("Invalid position \n");
   }
 }
 void remove_before_node(){
  int pos,f=0;
  printf("enter position\n");
  scanf("%d",&pos);
   struct list*node=start;
   if(start==NULL){
    printf("empty linklist\n");
    return;
   }
   if(pos==1){
    node=start;
    start=start->next;
    f=1;
   }
   else{
    int count=2;
    node=start->next;
    struct list*prev=start;
    struct list*q=start;

    while(node->next!=NULL){
      if(pos==count){
        f=1;
        q->next=node->next;
        break;
      }
      else{
        count++;
        node=node->next;
        prev=prev->next;
        q=node->next;
      }
    }
   }
   if(f){
    printf("%d  Deleted \n",node->val);
    free(prev);
   }
   else{
    printf("Invalid position \n");
   }
 }
void show()
{
    if(start==NULL)
    {
        printf("empty list");
        return;
    }
    printf("nodes are\n");
    struct list *temp= start;
    while ( temp != NULL)
   {
    printf("%d  %p %d\n",temp->val,temp->next, temp);
    temp=temp->next;
   }
}
int main()
{   
  start=NULL;
     printf("WELCOME TO LINKLIST PREMITIVE OPERATION\n");
     int choice;
     
     while(choice!=9){
      printf("1...insert in begin\n");
      printf("2...insert at last\n");
      printf("3...position\n");
      printf("4...insert before at value\n");
      printf("5...Remove At begin\n");
      printf("6...Remove At last\n");
      printf("7...Remove At given node\n");
      printf("8...show\n");
      printf("9...EXIT program\n");
     printf("Enter choice ");
     scanf("%d",&choice);
      switch (choice)
      {
      case 1:
        add_beg();
        break;
      case 2:
        insert();
        break;
      case 3:
        insert_at_pos();
        break;
      case 4:
       insert_before_value();
       break;
      case 5:
       remove_beg();
       break;
      case 6:
        remove_lastnode();
        break;
      case 7:
        remove_node_num();
        break;
      case 8:
        show();
        break;
      case 9:
        printf("Exit program\n");
        break;
      default:
       printf("Invalid choice");
        break;
      }
     }   
}