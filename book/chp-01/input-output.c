#include<stdio.h>
int main(){
    float num1;
    double num2;
    float a = 12.5;
    printf("Enter a number: ");
    scanf("%f",&num1);
    printf("Enter another number: ");
    scanf("%lf",&num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);
    printf("The floating-point of a in scintific notation is %e \n",a);
    return 0;
}