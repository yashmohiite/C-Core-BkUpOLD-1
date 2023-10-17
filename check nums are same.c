#include<stdio.h>
#include<stdlib.h>

int main()

{
    double a,b;

    printf("Enter 2 Numbers: \n");
    scanf("%lf%lf", &a, &b);

    if (a == b)
        printf("True \n\n");
    else
        printf("False \n\n");

    return 0;
}
