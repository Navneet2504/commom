#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,c;
    int a[20];
    printf("NAME = NAVNEET SAVITA \n");
    printf("ROLL NO. = 2100320120117 \n");
    printf("Enter the size of element:- ");
    scanf("%d",&n);
        c=pow(2,n);
    printf("Enter the Element of set:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Power set of a:\n");
    printf("{");
    for(i=0;i<c;i++){
        printf("{");
        for(j=0;j<n;j++){
            if(((1<<j)&i)>0){
                printf("%d ",a[j]);
            }
        }
        if(i==c-1){
            printf("},");
        }
        else{
            printf("},");
        }
        printf("\n");
    }
    printf("}");

}