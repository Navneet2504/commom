//postfix evaluation and prefix evalution
#include<stdio.h>
#include<string.h>
#define size 25
struct stack {
    int data[size];
    int top;
}s;
int push(int n){
    if(s.top==size-1){
    return 0;
    }
    else{
    s.data[++s.top]=n;
   }
}
int pop(){
    if(s.top==-1){
        return 0;
    }
    else{
    return s.data[s.top--];
    }
}
int cal(int a,int b,char c){
    switch (c)
    {
    case '+':
      return a+b;
    case '-':
      return a-b;
    case '*':
      return a*b;
    case '/':
      return a/b;
    case '%':
      return a%b;
    }
}
int main(){
    s.top=-1;
    int i=0;
    char postfix[26];
    //2 5 + 6 2 / 5 * - 7 +
    //2+3-9
    // printf("enter size");
    // scanf("%d",&n);
   // printf("Enter the postfix expression");
    gets(postfix);
    //strrev(postfix);
   // printf("postfix=%s",postfix);
   while(postfix[i]!='\0'){
    if(postfix[i]!=' '){
       // printf("%c",postfix[i]);
       char sym=postfix[i];
       if(sym>='0' && sym<='9'){
        push(sym-'0');
       }
       else{
        int b=pop();
        int a=pop();
        int num=cal(a,b,sym);
        push(num);
        
       }
      }
    i++;
   }
   printf("ans=%d",pop());
   

}