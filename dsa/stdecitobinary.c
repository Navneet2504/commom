// Decimal to Octal number
#include <stdio.h>
#define SIZE 20
struct stack
{
    int data[SIZE];
    int top;
};
struct stack init(struct stack s)
{
    s.top = -1;
    return s;
}
int isempty(struct stack s)
{
    return (s.top == -1);
}
struct stack push(struct stack s, int r)
{
    if (s.top == SIZE - 1)
    {
        printf("OVERFLOW");
    }
    else
    {
        s.top = s.top + 1;
        // printf("the value of x");
        // scanf("%d",&x);
        s.data[s.top] = r;
    }
    return s;
}
struct stack pop(struct stack s)
{
    if (s.top == -1)
    {
        printf("empty");
    }
    else
    {
        printf("%d", s.data[s.top]);
        s.top = s.top - 1;
        return s;
    }
}
int main()
{
    int num, r;
    struct stack s;
    printf("Decimal number: ");
    scanf("%d", &num);
    s = init(s);
    while (num > 0)
    {
        r = num % 8;
        s = push(s, r);
        num = num / 8;
    }
    //printf("%d", num);
    printf("Octal NUMBER: ");

    //s = pop(s);
    while (!isempty(s))
    {
        s = pop(s);
    }
}
