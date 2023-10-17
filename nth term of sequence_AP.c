#include<stdio.h>
#include<stdlib.h>

int main()

{
    double an, a1, d;
    int n;

    printf("Enter 1st term of seq:\n");
    scanf("%lf", &a1);

    printf("Enter position no. of element in seq:\n");
    scanf("%d", &n);

    printf("Enter dist between consecutive terms:\n");
    scanf("%lf", &d);

    an = a1 + (n - 1) * d;

    printf("nth term of seq: %0.2lf\n\n\n", an);

    return 0;
}
