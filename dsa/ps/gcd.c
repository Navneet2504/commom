#include<stdio.h>
void gcd(int a,int b){
    int c;
    c=a>b?b:a;
    while(c>=1){
        if(a%c==0&&b%c==0){
            printf("gcd :%d",c);
            break;
        }
        c--;
    }
}
void grcd(int a,int b){
    int c;
    while(a%b){
        c=a%b;
       a=b;
       b=c;
    }
    printf("GCD :%d",b);
}
int gcdd(int a,int b){
if(b==0){
    return a;
}
gcdd(b,a%b);
}
int main(){
    int a;
    int b;
    scanf("%d%d",&a,&b);
    //gcd(a,b);
    //grcd(a,b);
     int c=gcdd(a,b);
    printf("%d",c);
}