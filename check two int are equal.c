#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;

    printf("Enter 2 integer type Nos.");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
