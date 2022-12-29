//INFIX TO POSTFIX
//A+B-C/D*F
 #include<stdio.h>
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
int show(){

}
int peep(){
  return s.data[s.top];
}
int isempty(){
    return s.top==-1;
}
int prcd(char op1,char op2){
  if(op1=='$'||op1=='*'||op1=='/'||op1=='%'){
    return (op2!='$');
  }
  else{
    if(op2=='+'||op2=='-'){
      return 1;
    }
    else{
      return 0;
    }
  }
}
int main(){
  s.top=-1;
    char fix[50];
    char post[50];
    char x ,sy;
   printf("Enter the infix expression");
    gets(fix);
    //printf("infix=%s",fix);
    int i=0,p=0;
    while(fix[i]!='\0'){
     printf("%c\n",fix[i]);
       sy=fix[i];
      if(sy>='a'&& sy<='z'||sy>='A'&&sy<='Z'||sy>='0'&&sy<='9'){
      post[p]=sy;
      p++;
      }
      else if(isempty()){
        push(sy);
      }
      else if(sy=='('){
        push(sy);
      }
      else if(sy==')'){
        while (!isempty()&&(peep()!='('))
        {
          x=pop();
          post[p++]=x;
        }
        x=pop();
      }
      else{
          while (!isempty()&&(peep()!='(')&&prcd(peep(),sy)){
           x=pop();
           post[p++]=x; 
          }
          push(sy); 
      }
      i++;
    }
      //show(sy,post);
      while(!isempty()){
        sy=pop();
        post[p++]=sy;
        //show(sy,post)

      }

      post[p]='\0';
        printf("\npost=%s",post);

   

}