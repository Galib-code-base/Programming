#include<stdio.h>
#include<float.h>

int main(){
    printf("Storage size for float : %li byte\n", sizeof(float));
    printf("Minimum float positive value : %E\n", FLT_MIN);
    printf("Maximum float positive vale : %E\n", FLT_MAX);
    printf("Precision value : %i\n",FLT_DIG);
    return 0;
}