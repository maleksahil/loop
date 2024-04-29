#include<stdio.h>

int main()
{

    int n;
    int i=1;

    printf("enter any nmber: ");
    scanf("%d",&n);

    while(i<=n){
       if(i%2!=0){
           printf("%d\n",i);
       }
        i++;
    }
    
    return 0;
}