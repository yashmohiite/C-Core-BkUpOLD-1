// Solutn Lec = 394

// Referred Solutn, Lec = 394
#include<stdio.h>
#include<stdlib.h>
/*

*/

#define SIZE 5

int *generateArray(int size)
{
    int i;
    int *arr;
    arr = (int*)malloc(size*sizeof(int));
    for(i=0 ; i<SIZE ; i++)
        scanf("%d", &arr[i]);
    return arr;
}

void swapArray01(int **ptr1, int **ptr2)
{
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int sizeArr1, sizeArr2;
    int *Arr1, *Arr2;

    printf("Enter size for Array1: ");
    scanf("%d", &sizeArr1);
    printf("Enter size for Array2: ");
    scanf("%d", &sizeArr2);

    swapArray01(&Arr1, &Arr2);

    Arr1 = generateArray(sizeArr1);
    Arr2 = generateArray(sizeArr2);
    return 0;
}
