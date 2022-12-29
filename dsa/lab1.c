#include<stdio.h>
int main(){
    int m,n,p,k,f=0;
    int a[m],b[n],c[p];
    printf("enter the size of a");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size of b");
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    printf("enter the size of c");
    scanf("%d",&p);
    
    for(int i=0;i<m;i++){
        f==1;
        for(int j=0;j<n;j++){
            if(a[i]==b[j])
            c[k]=a[i];
            k++;
        }
        for(i=0;i<k;i++){
            printf("%d",c[i]);
        }
        
    }
}