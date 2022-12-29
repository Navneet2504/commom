#include<stdio.h>
int gcdd(int a,int b){
if(b==0){
    return a;
}
gcdd(b,a%b);
}

int main(){
   int a;
    int b,c;
    printf("NEERAJ PATEL \n");
    printf("2100320120118 \n");
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    c=gcdd(a,b);
    printf("GCD: %d",c);
}  