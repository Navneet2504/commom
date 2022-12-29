#include<stdio.h>
void findsum(int n){
    long long int sum=1;
    long long int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
        sum+=fact;
    }
    printf("sum=%ld",sum);
}
 int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    findsum(n);
    return 0;
 }