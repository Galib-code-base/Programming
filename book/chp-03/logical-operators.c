#include<stdio.h>

int main(){

    int y;

    printf("enter the year : ");
    scanf("%i",&y);

    if(y%4 == 0 || (y%400 == 0 && y%100 != 0))
        printf("%i is Leap Year\n",y);
    else
        printf("%i is Not Leap Year\n",y);

    return 0;
}