#include<stdio.h>

int main(){

    int i,n;
    int a=0,b=1,c;

    printf("enter number of term...");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}