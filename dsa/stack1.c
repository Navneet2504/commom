#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int item[10];
    int top;//default value garbage
};
struct stack s;
int push(int x)
{
    if (s.top == 9)
    {
        printf("stack Overflow");
        exit(1);
    }
    s.top = s.top + 1;
    s.item[s.top] = x;
    return s.item[s.top];
}
int pop()
{

    int x;
    if (s.top == -1)
    {
        printf("stack Underflow");
        exit(1);
    }
    x = s.item[s.top];
    s.top = s.top - 1;
    return x;
}
int main()
{
    int top = -1;
    int y, t, m;
    // push(100);
    // push(200);
    // push(300);
    // push(400);
    t = push(500);
    // push(600);
    // push(700);
    // push(800);
    // push(900);
    m = push(999);
    printf("\npushed value:%d", t);
    printf("\npushed value:%d", m);
    y = pop();
    printf("\npopped vlaue :%d", y);
    y = pop();
    printf("\npopped vlaue :%d", y);
    y = pop();
    printf("\npopped vlaue :%d", y);
    return 0;
}
