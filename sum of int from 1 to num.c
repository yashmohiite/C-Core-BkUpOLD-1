#include<stdio.h>

int main ()

{
    int num, i, sum = 0;

    printf("Enter an int till which you want to print the sum : \n");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Total sum from 1 upto %d is %d \n", num, sum);

    return 0;
}

// Alternate solution in Lec 171 using while
