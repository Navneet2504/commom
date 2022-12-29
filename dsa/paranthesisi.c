#include<stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d,e,s;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
      s=(a+b+c+d+e)/5;
    if(s>100){
        printf("Invalid Score");
    }
    else if(s>=90){
        printf("A");
    }
    else if(s>=80){
        printf("B");
    }
    else if(s>=60){
        printf("C");
    }
    else if(s>5){
        printf("D");
    }
    else{
        printf("Invalid Score");
    }
    return 0;
}
