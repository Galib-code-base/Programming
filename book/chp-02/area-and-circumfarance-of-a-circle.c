#include<stdio.h>
#define PI 3.1415
int main(){
    float r;
    printf("Enter the value of the Radious : ");
    scanf("%f",&r);
    // a = PI*r*r;
    // c = 2*PI*r;
    printf("The Are of the circle is %f\nAnd Circumfarance is %f\n",PI*r*r,2*PI*r);
    return 0;
}