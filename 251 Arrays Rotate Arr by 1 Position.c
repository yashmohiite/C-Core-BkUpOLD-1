// Solutn Lec = 251

// Reffered Solutn, Lec = 252
#include<stdio.h>
#define SIZE 4
int main()
{
    int valueArr[SIZE] = {5,4,7,3};
    int i, temp;

    printf("Original Array : \n");
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d ", valueArr[i]);
    }

    temp = valueArr[0];

    for(i=1 ; i<SIZE ; i++)
    {
        valueArr[i-1] = valueArr[i];
    }

    valueArr[SIZE - 1] = temp;

    printf("\n\nArray shift by 1 Pos to Left is :\n");
    for(i=0 ; i<SIZE ; i++)
    {
        printf("%d ", valueArr[i]);
    }

    return 0;
}
