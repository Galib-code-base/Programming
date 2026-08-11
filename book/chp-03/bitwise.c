#include<stdio.h>
int main(){

    unsigned int a = 14, b = 34;

    //AND
    printf("a & b is : %d\n",a & b);
    //OR
    printf("a | b is : %d\n",a | b);
    //XOR
    printf("a ^ b is : %d\n",a ^ b);
    //One's Complement
    printf("~a is : %d\n",~ a);
    //One's Complement
    printf("~b is : %d\n",~ b);
    //Left Shift
    printf("a << 2 is : %d\n",a << 2);
    //Right Shift
    printf("b >>  2 is : %d\n",b >> 2);

    return 0;
}