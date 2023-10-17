// Solutn Lec = 254

// Reffered Solutn, Lec = 256
#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
#define N 2

int main()
{
    int i, k, temp;
    int valuesArr[SIZE] = {5,4,7,3};

    printf("Original Array:\n");
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d ", valuesArr[i]);
    }

    for(k=0 ; k<N ; k++)
    {
        temp = valuesArr[SIZE-1];
        for(i=SIZE-1 ; i>0 ; i--)
        {
            valuesArr[i] = valuesArr[i-1];
        }
        valuesArr[0] = temp;
    }

    printf("\nAfter Right Shift by %d\n", N);
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d ", valuesArr[i]);
    }

    return 0;
}
