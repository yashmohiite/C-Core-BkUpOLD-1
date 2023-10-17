// Solutn Lec = 259

// Reffered Solutn, Lec = 259
#include<stdio.h>
#include<stdlib.h>
/*
Write a Func that gets an Arr, Size of the Arr
Finds the Sum of All Elements in the Arr
Func should return Sum
*/
int sumOfArray(int *pArr, int size);

int main()
{
    int arr[3] = {1,3,10};
    int result = 0;
    result = sumOfArray(arr, 3);
    printf("The result sum = %d\n", result);
    return 0;
}

int sumOfArray(int *pArr, int size)
{
    int i;
    int sum = 0;
    for(i=0 ; i<size ; i++)
    {
        sum = sum + pArr[i]; //sum+=pArr[i];
    }
    return sum;
}
