#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int val;
    struct Node*next;
}Node;
 Node*initialize(){
    Node *node=(Node*)malloc(sizeof(Node));
    node=NULL;
    return node;
}
Node*createNode(int x){
    Node*node=(Node*)malloc(sizeof(Node));
    node->val=x;
    node->next=NULL;
}
void insert_beg(Node**start,int x){
 Node*newNode=createNode(x);
 if(*start!=NULL){
    newNode->next=*start;
 }
 *start=newNode;
}
void insert_last(Node**start,int x){
    Node*newnode=createNode(x);
    if(*start==NULL){
        *start=newnode;
      }
    else{
        Node*temp=*start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    }
}
int count(Node *start)
{
    int count = 0;
    if (start == NULL)
        return 0;
    while (start != NULL)
    {
        count++;
        start = start->next;
    }
    printf("\nTotal Nodes : %d",count);
    return count;
}
void insert_pos(Node **start, int pos, int x)
{
    int totalNodes = count(*start);
    if (totalNodes+1 < pos)
    {
        printf("\nInvalid position %d, Available Position %d-%d",pos,1,totalNodes+1);
        return;
    }

    Node *newNode = createNode(x);
    if (pos == 1)
    {
        newNode->next = *start;
        *start = newNode;
    }else if(totalNodes+1 == pos ){
        insert_last(start,x);
    }
    else
    {
        Node *prev = *start;
        Node *current = (*start)->next;
        int p = 2;
        while (p <= pos-1 )
        {
            current = current->next;
            prev = prev->next;
            p++;
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }
    printf("\nNode inserted at %d", pos);
}
Node * search(Node *start, int sval){
    Node *current  = start;
    while(current !=NULL){
        if(current->val == sval)
            return current;
    }
    printf("\nNode with %d value not found",sval);
    return NULL;

}
void insert_after(Node **start, int val, int x)
{
    Node *current = search(*start, val);
    if(current != NULL){
        Node *newNode = createNode(x);
        newNode->next = current->next;
        current->next = newNode;
        printf("\nNode inserted after %d",val);
    }
}
int isempty(Node*start){
    if(start==NULL){
        printf("empty linklist\n");
        return 1;
    }
    else{
    return 0;
    }
}
void del_beg(Node**start){
    if(*start==NULL){
        printf("EMPTY LINKLIST\n");
        return ;
    }
    Node*temp=*start;
    *start=(*start)->next;
    printf("%d node deleted",temp->val);
    free(temp);
}
void del_last(Node **start)
{
    if (!isempty(*start))
    {
        Node *temp = *start;
        if (temp->next == NULL)
        {
            printf("\n%d deleted node", temp->val);
            *start = NULL;
        }
        else
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            printf("\n%d deleted node", temp->next->val);
            free(temp->next);
            temp->next = NULL;
        }
    }
}
 void del(Node**start){
     if(*start==NULL){
        printf("empty\n");
        return;
     }
     else{
        Node*temp=*start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        printf("%d  deleted node",temp->val);
        free(temp->next);
        temp->next=NULL;
     }
 }

void show(Node*start){
    if(start==NULL)
    {
        printf("empty list");
        return;
    }
    printf("nodes are\n");
    Node*temp= start;
    while ( temp != NULL)
   {
    printf("%d  %p %d\n",temp->val,temp->next, temp);
   // printf("%d ->",temp->val);
    temp=temp->next;
   }
}