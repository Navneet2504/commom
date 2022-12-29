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
void base(int c){
    int b;
    switch(c){
        case 1:
        b=2;
        case 2:
        b=8;
        case 3:
        b=16;
        default:
        printf("invalid");
    }
}
void main(){
    struct stack st;
    char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int num;
    st.top=-1;
    printf("enter num\n");
    scanf("%d",&num);
    printf("binary: 2\n");
    printf("octal: 8\n");
    printf("Hex: 16\n");
    int c;
    printf("Enter your choice:- ");
     scanf("%d",&c);
    while(num>0){
        base(c);
        int r=num%b;
        push(&st,r);
        num/=b;
    }
    printf("Hexadecimal no:- ");
    while(st.top!=-1){
        int r=pop(&st);
        printf("%c ",hex[r]);
    }
}
