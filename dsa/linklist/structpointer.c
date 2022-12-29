#include<stdio.h>
struct student{
    char name[25];
    char id[20];
    char sec;
    char branch[10];
    int roll;
    int sem;
    float cgpa;
};
void input(struct student *p){
  printf("Student Name \n");
  fflush(stdin);
  gets(p->name);
  fflush(stdin);
  printf("student ID\n");
  gets(p->id);
  fflush(stdin);
  printf("SECTION \n");
  scanf("%c",&p->sec);
  fflush(stdin);
  printf("Branch \n");
  scanf("%s",&p->branch);
  fflush(stdin);
  printf("Roll no. \n");
  scanf("%d",&p->roll);
  fflush(stdin);
  printf("Enter semester\n");
  scanf("%d",&p->sem);
  printf("ENTER your CGPA\n");
  scanf("%f",&p->cgpa);  
}
void show(struct student s ){
  printf("Student Details:\n");
  printf("NAME:%s\n",s.name);
  printf("STUDENT ID:%s \n",s.id);
  printf("SECTION:%c\n",s.sec);
  printf("BRANCH:%s\n",s.branch);
  printf("ROLL NO. %d\n",s.roll);
  printf("SEMSETER %d \n",s.sem);
  printf("CGPA: %.2f\n",s.cgpa);
}
int main(){
    struct student s;
    input(&s);
    show(s);
}
