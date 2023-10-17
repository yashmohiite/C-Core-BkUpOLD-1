// Solutn Lec = 260

// Reffered Solutn, Lec = 260
#include<stdio.h>
#include<stdlib.h>

void printArr(int *ptr, int size)
{
    int i;
    for(i=0 ; i<size ; i++)
    {
        printf("%d  ", ptr[i]);
    }
    printf("\n");
}

void resetElementToZero(int *ptr, int size)
{
    int i;
    for(i=0 ; i<size ; i++)
    {
        ptr[i] = 0;
    }
}

int main()
{
    int arr[3] = {1,3,10};
    printf("Before Reset: \n");
    printArr(arr, 3);
    resetElementToZero(arr, 3);
    printf("After Reset: \n");
    printArr(arr, 3);

    return 0;
}
