#include <stdio.h>
#define size 6
int f;
int r;
int dq[size];
int insert_front(int item)
{
    if ((r + 1) % size == f)
    {
        printf("FULL\n");
        return 0;
    }
    else
    {
        if (f == -1)
        {
            f = 0;
            r = 0;
        }
        else
        {
            f = (size + f - 1) % size;
        }
        //printf("enter item\n");
        dq[f] = item;
        return 1;
    }
}
int insert_rear(int item)
{
    if ((r + 1) % size == f)
    {
        printf("FULL\n");
        return 0;
    }
    if (f==-1)
    {
        f = r = -1;
    }
    else
    {
        r = (r + 1) % size;
    }
    printf("enter item\n");
    dq[r] = item;
    return 1;
}
int del_front()
{
    int item;
    if (f == -1)
    {
        printf("empty");
        return 0;
    }
    item = dq[f];
    if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f = (f + 1) % size;
    }
    printf("item=%d", item);
    printf("\n");
    return 1;
}
int del_rear()
{
    int item;
    if (f == -1)
    {
        printf("empty");
        return 0;
    }
    item = dq[r];
    printf("item=%d", item);
    printf("\n");
    if (f == r)
    {
        f = r = -1;
    }
    else
    {
        r = (r - 1 + size) % size;
    }
}
void show()
{
    if (f == -1)
    {
        printf("empty");
    }
    else
    {   printf("%d %d\n",f,r);
        int i = f;
        while (i != r)
        {
            printf("%d ", dq[i]);
            i = (i + 1) % size;
        }
        printf("%d \n", dq[i]);
    }
}
int main()
{
    //int f = r = -1;
    int c;
    while (c != 5)
    {
        printf("1...insert_front\n");
        printf("2...insert_rear\n");
        printf("3...del_front\n");
        printf("4...del_rear\n");
        printf("5...show\n");
        printf("Enter choice\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert_front(30);
            insert_front(40);
            insert_front(50);
            insert_front(60);
            insert_front(70);
            break;
        case 2:
            insert_rear(100);
            insert_rear(110);
            insert_rear(120);
            insert_rear(130);
            insert_rear(140);
            break;

        case 3:
            del_front();
            break;

        case 4:
            del_rear();
            break;
        case 5:
            show();
            break;

        default:
            printf("Wrong choice\n");
            break;
        }
        //printf("%d%d",f,r);
    }
    return 0;
}