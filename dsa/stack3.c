#include<stdio.h>
#define size 10

// defining a structure;
struct stack {
int data[size];
int top;
};
struct stack init(struct stack st)
{
    st.top=-1;
    return st;

}
// push function;
struct stack push(struct stack st,int value)
{

    if (st.top==size-1)
    {
        printf("overflow");
    }
    else{
        st.top=st.top+1;
        st.data[st.top]=value;
    }
    return st;
}
void show(struct stack st)
{
    int i;
    if(st.top==-1){
       printf("stack is empty");
    }
    else{
        printf("    stack items are:");
        for(i=st.top;i>=0;i--){
            printf("%d \n",st.data[i]);

        }
    }
}
struct stack pop(struct stack s)
{
    int item;
   if(s.top==-1){
    printf("empty");
   }
    else{
      item=s.data[s.top];
      s.top=s.top-1;
      printf("%d",item);
       return s;
    }
}
int menu()
{
int  choice;
printf("enter 1 for push:\n");
printf("enter 2 for pop:\n");
printf("enter 3 for show:\n");
scanf("%d",&choice);
return choice;
}
int main()
{
    struct stack s=init(s);
    int choice;
    printf("%d \n",s.top);
    //menu();

    do
    {
     int t=menu();
      if(t==1){
            int num;
        printf("enter the value you want to push:");
        scanf("%d",&num);
        push(s,num);
        printf("pushed \n");
        s.top++;
printf("%d \n",s.top);
      }
       if(t==2){
        pop(s);}
        if(t==3)
        {
            show(s);}
} while(s.top<size);

   return 0;
}
