#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
struct stack{
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
        printf("the value of x: ");
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
int menu(){
     int choice;
     printf("1........push\n");
     printf("2........pop\n");
     printf("3........show\n");
     printf("4.....exit\n");
     printf("Enter your choice\n");
     scanf("%d",&choice);
     return choice;
}

 void show(struct stack st){
    int i;
    if(st.top==-1){
        printf("stack empty");

    }
    else{
        printf("stack item:\n");
        for(i=st.top;i>=0;i--){
            printf("%d\n",st.data[i]);   
               }
               printf("TOP: \t %d",st.top);
    }
 }
 struct stack isempty(struct stack st)
 {
    return(st.top==-1);
 }
 void exit(){
    printf("OVER FLOW\n");
    exit(1);
}
/*void peek(struct stack st){
    if(isempty(st)){
        printf("stack is empty\n");
    }
    else{
        printf("\nTop item=%d\n",st.data[st.top]);
    }
}*/
int main(){
    int choice;
    struct stack s;
    s=init(s);
    int x;
    printf("%d\n",s.top);
    do{
        choice=menu();
        switch (choice)
        {
        case 1:
           s=push(s,x);
        break;
        case 2:
           s=pop(s);
        break;
        case 3:
           show(s);
        break;
        case 4:
         s = isempty(s);
        default:
         printf("invalid");
            break;
        }
    }while (choice!=3);
    // s=init(s);
    // s=push(s,x);
    // s=push(s,x);
    // s=push(s,x);
    //s=push(s,x);
    //s=push(s,x);
    //s=push(s,x);
    //s=push(s,x);
    //show(s);
    // pop(s);
    // show(s);
}