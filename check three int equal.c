#include<stdio.h>
#include<stdlib.h>

//This works, but also check sample solution provided

int main()

{
    int a, b , c;

    printf("Enter 3 integer type values");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b)
    {
        if(b == c)
            printf("Equal");
            else
                printf("Not Equal");
    }
    else
        printf("Not Equal");

    return 0;
}
