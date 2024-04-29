#include<stdio.h>

int main()
{

    int n;
    int i;
    
    
    printf("enter any year: ");
    scanf("%d",&i);

    printf("enter any year: ");
    scanf("%d",&n);

    while(i<=n){
       if(i%4==0){
           printf("%d\n",i);
       }
        i++;
    }
    
    return 0;
}