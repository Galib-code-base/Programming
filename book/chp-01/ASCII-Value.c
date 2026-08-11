#include<stdio.h>
int main(){
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);

    printf("You entered %c\n",chr);
    printf("The ASCII value is %d\n",chr);
    return 0;
}