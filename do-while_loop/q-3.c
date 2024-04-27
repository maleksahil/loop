#include<stdio.h>

int main(){

    int n;
    int i = 1;

    printf("enter any number: ");
    scanf("%d",&n);

    do{
        if(n%2 == 0){
        printf("%d\n",n);
        }
        n--;
    }while(n>=i);
}