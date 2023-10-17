// Solutn Lec = 253

// Reffered Solutn, Lec = 254
#include<stdio.h>
#define SIZE 4
#define N 2
int main()
{
    int valueArr[SIZE] = {5,4,7,3};
    int i, k, temp;

    printf("Original Array : \n");
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d ", valueArr[i]);
    }

    for(k=0 ; k < N ; k++)
    {
        temp = valueArr[0];

        for(i=1 ; i<SIZE ; i++)
        {
            valueArr[i-1] = valueArr[i];
        }

        valueArr[SIZE - 1] = temp;
    }

    printf("\n\nArray shift by N Pos to Left is :\n");
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d ", valueArr[i]);
    }
    printf("\n");

    return 0;
}
