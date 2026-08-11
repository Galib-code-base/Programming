#include<stdio.h>
int main(){

    int a, b, o, g;
    printf("Enter the value of o & g : \n");
    scanf("%i%i", &a, &b);
    o = a++;
    g = b++;
    printf("o = %i \ng = %i\n",a,b);

    o = a--;
    g = b--;
    printf("o = %i \ng = %i\n",a,b);

    return 0;
}