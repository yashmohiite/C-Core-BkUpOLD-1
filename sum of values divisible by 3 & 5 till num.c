// Solution : Lec 179

// Imp Quest / Solutn

// Both Trivial & Efficient(Optimal) Solutn :

#include<stdio.h>

int main ()

{
    int i;
    int num, sum = 0;

    printf("Enter num : \n");
    scanf("%d", &num);

    // Trivial Solution

    for (i = 1 ; i <= num ; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d can be divided by both 3 and 5 \n", i);
            sum = sum + i;
        }
    }

    printf("sum = %d \n", sum);

    return 0;
}

/*

printf("\n Optimal Solution \n");

// Optimized Solution

for (i = 15 ; i <= num ; i = i + 15)
    {
        printf("%d can be divided by both 3 and 5 \n");
        sum = sum + i;
    }

    printf("Sum = %d \n", sum);


*/
