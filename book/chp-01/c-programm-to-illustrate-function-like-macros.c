#include<stdio.h>
// macro with para meter
#define AREA(l,b)(l*b)
int main(){

    int l1 = 10, l2 = 5, area;
    area = AREA(l1, l2);
    printf("Area is %i",area);
    return 0;
}