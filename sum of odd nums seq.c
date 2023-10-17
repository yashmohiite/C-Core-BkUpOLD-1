#include<stdio.h>

// Receives 'n' from the user
// Receives/Read 'n' values (integers)
// Sum all the Odd Numbers

int main ()

{
    int i, currentValue, oddSum = 0;
    int n;

    printf("Enter 'n' (the num of value of a sequence): \n ");
    scanf("%d", &n);

    for (i = 1 ; i <= n ; i++)
    {
        printf("Enter a Value : ");
        scanf("%d", &currentValue);

        if(currentValue % 2 == 1)   // It's an Odd Num
            oddSum += currentValue;
    }

    printf("Odd sum = %d \n", oddSum);

    return 0;
}
