#include<stdio.h>
#include<stdlib.h>

int main ()

{
    float num;

    printf("Enter a number: \n");
    scanf("%f", &num);

    if(num > 0)
        printf("1 \n");

    else if(num < 0)
        printf("-1 \n");

    else if(num == 0)
        printf("0 \n");

    return 0;
}
