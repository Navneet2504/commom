#include<stdio.h>
void tri(int s1,int s2,int s3)
{
    if(s1!=s2&&s2!=s3)
    {
        printf("scalene");
    }
    else if(s1==s2 &&s2==s3)
    {  printf("Equilateral");
    }
    else{
        printf("isocele");
    }
}
int main()
{
    int s1,s2,s3;
    scanf("%d%d%d",&s1,&s2,&s3);
    tri(s1,s2,s3);

}
