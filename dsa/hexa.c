//Decimal to Hexadecimal number
#include<stdio.h>
struct stack
{
    int data[20];
    int top;
};
void push(struct stack *st,int r)
{
    st->top++;
    st->data[st->top]=r;
}
int pop(struct stack *st){
    int r=st->data[st->top];
    st->top--;
    return r;
}
void main(){
    struct stack st;
    char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int num;
    st.top=-1;
    printf("enter num\n");
    scanf("%d",&num);
    while(num>0){
        int r=num%16;
        push(&st,r);
        num/=16;
    }
    printf("Hexadecimal no:- ");
    while(st.top!=-1){
        int r=pop(&st);
        printf("%c ",hex[r]);
    }
}
