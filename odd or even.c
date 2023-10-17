#include<stdio.h>
#include<stdlib.h>

int main()

{
    int num, rem;

    printf("Enter a no. \n");
    scanf("%d", &num);

    rem = num % 2;

    if(rem == 0)

        printf("The no. %d is even \n", num);

    else

        printf("The no. %d is odd \n\n\n", num);

    return 0;
}
