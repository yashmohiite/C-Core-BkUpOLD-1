// Solution : Lec - 181

// Imp Quest & Solutn

// Both Trivial & Efficient(Optimal) Solutn

#include<stdio.h>

int main ()

{
    int i;
    int num , sum = 0;

    printf ("Enter num : \n");
    scanf ("%d", &num);

    // Trivial Solutn :

    printf ("\n Trivial Solution \n");

    for (i = 1 ; i <= num ; i++)    // num = 100 --> 100 times / iterations
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            printf ("%d can be divided by either 3 or 5 \n", i);
            //sum = sum + i;
        }
    }

    printf("\n Optimal Solution \n");
    // Optimized Solutn :

    for(i = 3 ; i <= num ; i = i + 3)    // num / 3 --> num = 100 --> 33 times / iterations
        sum = sum + i;

    for(i = 5 ; i <= num ; i = i + 5)    // num / 5 --> num = 100 --> 20 times / iterations
    {
        if(i % 3 != 0)             // We haven't take into account yet (into the sum)
        sum = sum + i;
    }

    printf("Sum = %d \n", sum);

    return 0;
}
