#include<stdio.h>
struct count{
    int c;
}x;
void show(){
    printf("Value=%d",x.c);
}
void input(){
    x.c++;
    show();
}
int main(){
   // struct count abc;
    x.c=0;
    input();
    input();
    show();
}