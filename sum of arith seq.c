#include<stdio.h>
#include<stdlib.h>

int main()

{
    float a1, an, sn;
    int n;

    printf("Enter 1st term:\n");
    scanf("%f", &a1);

    printf("Enter last term:\n");
    scanf("%f", &an);

    printf("Enter total no. of elements:\n");
    scanf("%d", &n);

    sn = (a1 + an) * n / 2;

    printf("Sum of arithmetic sequence: %0.1f\n\n\n", sn); //we can use '0.1' or '.0' , it has same effect to display 1 decimal number after the point

    return 0;
}
