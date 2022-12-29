#include <stdio.h>
   queue<int> q1;
   queue<int> q2;
   void push(int x)
   {
      q2.push(x);

      while (!q1.empty())
      {
         q2.push(q1.front());
         q1.pop();
      }

      queue<int> temp = q1;
      q1 = q2;
      q2 = temp;
   }

   int pop()
   {
      if (empty())
      {
         printf("Stack Is Empty\n");
         return -1;
      }

      int x = q1.front();
      q1.pop();
      return x;
   }

   int top()
   {
      if (empty())
      {
         printf("Stack Is Empty\n");
         return -1;
      }

      int x = q1.front();
      return x;
   }

   bool empty()
   {
      if (q1.empty() && q2.empty())
      {
         return true;
      }
      return false;
   }

int main()
{
   Stack s;

   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.push(60);

   s.pop();
   printf("%d",s.top());
   s.pop();

   printf("%d",s.top());
   s.pop();
   s.pop();
   s.pop();
   s.pop();
   printf("%d",s.empty());
}