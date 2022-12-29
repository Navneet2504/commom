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
void show(struct student s ){
    printf("NAME:%s\n",s[i].name);
  printf("STUDENT ID:%s \n",s[i].id);
  printf("SECTION:%c\n",s[i].sec);
  printf("BRANCH:%s\n",s[i].branch);
  printf("ROLL NO. %d\n",s[i].roll);
  printf("SEMSETER %d \n",s[i].sem);
  printf("CGPA: %f\n",s[i].cgpa);
}

int main(){
    int n=2;
    int i;
  struct student s[n];
  
  for(int i=0;i<n;i++){
  printf("Student Name \n");
  fflush(stdin);
  gets(s[i].name);
  fflush(stdin);
  printf("student ID\n");
  gets(s[i].id);
  fflush(stdin);
  printf("SECTION \n");
  scanf("%c",&s[i].sec);
  fflush(stdin);
  printf("Branch \n");
  scanf("%s",&s[i].branch);
  fflush(stdin);
  printf("Roll no. \n");
  scanf("%d",&s[i].roll);
  fflush(stdin);
  printf("Enter semester\n");
  scanf("%d",&s[i].sem);
  printf("ENTER your CGPA\n");
  scanf("%f",&s[i].cgpa);
  }
  for(int i=0;i<n;i++){
  show(s[i]);
  }
//   printf("NAME:\n",s.name);
//   printf("STUDENT ID: \n",s.id);
//   printf("SECTION:%c\n",s.sec);
//   printf("BRANCH:%c\n",s.branch);
//   printf("ROLL NO. %d\n",s.roll);
//   printf("SEMSETER %d \n",s.sem);
//   printf("CGPA: %f\n",s.cgpa);



}