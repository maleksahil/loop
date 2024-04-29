#include<stdio.h>

int main(){

    int number,i,sum=0;

    printf("This programme is to check if given number is prime or not? \n");
    printf("enter any number: ");
    scanf("%d",&number);

    for(i=1; i<=number; i++){
        if(number%i == 0)
        {
            sum++;
        }
    }
    if(sum == 2)
    {
        printf("%d is a prime number",number);

    }
    else{
        printf("%d is not a prime number",number);
    }
}