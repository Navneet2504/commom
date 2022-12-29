#include<stdio.h>
void tri(int s1,int s2,int s3)
{
    if(s1==s2==s3)
    {
        printf("equilateral");
    }
    else if(s1==s2&&s2==s3&&s1==s3)
    {  printf("isocele");
    }
    else{
        printf("scalene");
    }
}
int main()
{
    int s1,s2,s3;
    printf("enter the three side");
    scanf("%d%d%d",&s1,&s2,&s3);
    tri(s1,s2,s3);

}