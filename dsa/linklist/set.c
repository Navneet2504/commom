#include"linklist.h"
void Union(Node *start, Node *start2)
{
     Node *p, *q;
    Node *start3;
    p = (start);
    q = (start2);
    start3 = NULL;
    while (p != 0 && q != 0)
    {
        if ((p->val) < (q->val))
        {
            insert_beg(&start3, p->val);
            p = p->next;
        }
        else if ((p->val) > (q->val))
        {
            insert_beg(&start3, q->val);
            q = q->next;
        }
        else{
            insert_beg(&start3, q->val);
            p = p->next;
            q = q->next;
        }
    }
    while (p != 0)
    {
        insert_beg(&start3, p->val);
        p = p->next;
    }
    while (q != 0)
    {
        insert_beg(&start3, q->val);
        q = q->next;
    }
   printf("union set\n  { ");
    show(start3);
    printf(" } \n");
}

int main(){
      Node*start=initialize();
    Node*start2=initialize();
    Node*start3=initialize();

    insert_beg(&start,10);
    insert_last(&start,20);
    insert_last(&start,30);
    insert_last(&start,40);
    insert_last(&start,50);
    insert_last(&start2,60);
    insert_last(&start2,70);
    insert_last(&start2,80);
    insert_last(&start2,90);
    insert_last(&start2,100);
     Union(&start,&start2);
}