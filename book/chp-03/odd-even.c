#include<stdio.h>
int main(){

    int n;

    printf("Enter a Number : ");
    scanf("%i",&n);

    n%2 == 0 ? printf("Even Numver\n") : printf("Odd Number\n") ;

    return 0;
}