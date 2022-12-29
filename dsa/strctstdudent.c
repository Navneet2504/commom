#include<stdio.h>
struct student
{
 char name[20];
 char branch[5];
 char sec;
 int year;
 char grade;
};

int main(){
    int i;
    struct student s[2];
 for (i=0;i<2;i++){
    printf("name");
    gets(s[i].name);
    printf("branch");
    gets(s[i].branch);
    printf("sec");
    scanf("%c",&s[i].sec);
    fflush(stdin);
    printf("year");
    scanf("%d",&s[i].year);
    fflush(stdin);
    printf("grade");
    scanf("%c",&s[i].grade);
    fflush(stdin);

 }
 for (i=0;i<2;i++){
    printf("Name:\n");
    puts(s[i].name);
    printf("Branch:\n");
    puts(s[i].branch);
    printf("Sec:\n");
    printf("%c\n",s[i].sec);
    printf("Year:\n");
    printf("%d\n",s[i].year);
    fflush(stdin);
    printf("Grade:\n");
    printf("%c\n",s[i].grade);
    fflush(stdin);

 }
}
