#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, A, P, S;
    printf("Enter the value of a, b & c : \n");
    scanf("%f%f%f",&a, &b, &c);

    P = a+b+c;
    S = P/2;
    A = sqrt(S*(S-a)*(S-b)*(S-c));

    printf("Area of the Triangle is %f\nPeremeter of the Triangle is %f\n", A, P);

    return 0;
}