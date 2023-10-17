#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b, temp;
    a=1.2;
    b=2.1;

    printf("Before swap for floating points\n\n");
    printf("a = %0.3f\n", a);
    printf("b = %0.3f\n\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap\n\n");
    printf("a = %0.3f\n", a);
    printf("b = %0.3f\n\n", b);

    return 0;
}
