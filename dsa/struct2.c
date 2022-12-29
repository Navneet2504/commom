#include<stdio.h>
struct roll{
   char name[20];
    int roll;
    int sub[6];
    
};
int main(){
    struct roll s[6];
    int i;
    int sum[6]={0};
    for(i=0;i<6;i++){
        printf("Student name \n");
        gets(s[i].name);
        fflush(stdin);
        printf("ROLL no.\n");
        scanf("%d",&s[i].roll);
        for(int j=0; j<6; j++){
            printf("Student %d Subject %d: ",i+1,j+1);
            scanf("%d",&s[i].sub[j]);
            sum[i] += s[i].sub[j];
        }
        
        fflush(stdin);
    }
    
     for(i=0;i<6;i++){
        printf("%d ",sum[i]);
     }
    return 0;

}