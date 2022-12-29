#include<stdio.h>
#define SIZE 10
struct satck{
    int data[SIZE];
    int top;
};
struct stack init(struct stack st){
    st.top=-1;
    return st;
}
struct stack push(struct stack s,int x){
    if (s.top==SIZE-1)
    {
        printf("OVERFLOW");
        
    }
    else{
        s.top=s.top+1;
        printf("the value of x");
        scanf("%d",&x);
        s.data[s.top]=x;
        }
        return s;
}
struct stack pop(struct stack s){
 if(s.top==-1){
    printf("empty");
 }
 else{
    printf("\npoped : %d\n",s.data[s.top]);
    s.top=s.top-1;
    return s;
    
 }
}
int main(){
    struct stack s;
    int x;
    printf("insert value\n");
    scanf("%d",&x);
    s=init(s);
    s=push(s,x);
    s=pop(s);
    return 0;
}