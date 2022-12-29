#include<stdio.h>
int main()
{
    printf("NAVNEET SAVITA \n");
    printf("2100320120117 \n");
    
    int set_a[4],set_b[4],set_c[9];
    int i,j,k;
    int f=0;
    printf("enter the element of set_a \n");
    for(i=0;i<4;i++)
     scanf("%d",&set_a[i]);
    // int set_a[10];
   // int i;
   /* printf("enter the element of set_a \n");
    for(i=0;i<10;i++)
     scanf("%d",&set_a[i]);*/
   // int j;
    printf("enter the element of set_b \n");
    for(j=0;j<4;j++)
     scanf("%d",&set_b[j]);
    // int set_c[20];
    // int k;
    // int f=0;
     for(i=0;i<4;i++)
     {
        set_c[k]=set_a[i];
        k++;
     }
      
      for(i=0;i<4;i++)
      {
        f=0;
        for(j=0;j<4;j++)
        {
            if(set_b[i]==set_c[j])
            {
             f=1;
             break;
            }
             if(f==0)
             {
                set_c[k]=set_b[i];
                k++;
             }
        }
        printf("aUb \n");
        for(i=0;i<k;i++)
        printf("%d",set_c[i]);
        printf("\n");

      return 0;
    }
}
    


