#include<stdio.h>
#include<stdlib.h>

int main()

{
    float num1, num2;

    printf("Enter num1\n");
    scanf("%f", &num1);

    printf("Enter num2\n");
    scanf("%f", &num2);

    if (num1 > num2)                // Note syntaxes of 'if' and 'else'

        printf("%.2f is greater\n\n\n", num1);
    else
        printf("%.2f is greater\n\n\n", num2);

    return 0;
}
