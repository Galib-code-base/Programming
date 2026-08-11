#include<stdio.h>
#include <stdbool.h>
int main(){
    
    float n;
    
    printf("Enter a Number : ");
    scanf("%f",&n);

        if ( n == 0){
            printf("The Number is Zero\n");
        }
        else if ( n > 0)
        {
            printf("The Number is Positive\n");
        }
        else
            printf("The Number is Negative\n");
    
    return 0;
 }