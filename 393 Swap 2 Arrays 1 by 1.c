// Solutn Lec = 393

// Referred Solutn, Lec = 393
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
/*
Receive 2 Arrays of the same size
Swap betwn their values 1 by 1 --> O(n) Time Complexity
*/

void swap(int *val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void swapArrayON(int *arr1, int *arr2)
{
    int i;
    for(i=0 ; i<SIZE ; i++)
        swap(&arr1[i], &arr2[i]);
}

void printArr(int *arr)
{
    int i;
    for(i=0 ; i<SIZE ; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int Array1[SIZE] = {1,3,6,8,10};
    int Array2[SIZE] = {2,2,4,11,17};
    printf("Array values before swap\n");
    printArr(Array1);
    printArr(Array2);
    swapArrayON(Array1, Array2);
    printf("\n");
    printf("Array values AFTER Swap\n");
    printArr(Array1);
    printArr(Array2);
    return 0;
}
