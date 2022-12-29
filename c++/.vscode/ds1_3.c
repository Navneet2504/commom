#include<stdio.h>
void evenodd(int d)
{
    switch(d){
        case 0:
        printf("even");
        break;
       /* case 1:
        printf("odd")*/
        default:
        printf("odd");

    }
}
int main()
{  int n,d;
 printf("enter the number");
  scanf("%d",&n);
  d=n%2;
  evenodd(d);
  //return 0;

}