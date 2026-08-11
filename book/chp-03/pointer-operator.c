#include<stdio.h>
int main(){

int num = 10;
int *ptr = &num;  // & gets the address of num
int val = *ptr;   // * gets the value at the address (val = 10)

printf("Address of num is : %p\n",(void*)ptr);
printf("Value of num : %i\n", val);

    return 0;
}