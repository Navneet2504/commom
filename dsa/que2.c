#include <stdio.h>
#define MAX 50
void insert();
int array[MAX];
int rear = -1;
int front = -1;
main()
{
    int add_item;
    int choice;
    while (1)
    {
      printf("1.Insert element to queue \n");
      printf("2.Display elements of queue \n");
      printf("3.Quit \n");
      printf("Enter your choice : ");
      scanf("%d", &choice);
      switch (choice){
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(1);
        default:
         printf("Wrong choice ");
      }
          printf("%d",rear);

    }
}
void insert()
{
    int add_item;
    if (rear == MAX - 1)
      printf("Queue Overflow ");
    else
    {
      if (front == -1)
          /*If queue is initially empty */
          front = 0;
      printf("Inset the element in queue : ");
      scanf("%d", &add_item);
      rear = rear + 1;
      array[rear] = add_item;
    }
}
void display()
{
    int i;
    if (front == -1)
      printf("Queue is empty ");
   else{
            printf("Queue is :");
            for (i = front; i <= rear; i++)
                printf("%d ", array[i]);
      printf("");
   }
}