// Solutn Lec = 244

// Reffered Solutn, Lec = 244
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

//Calc & Print the  Largest Sum of Two Adjacent Elements (Neighbors) in Array
//Ex: 1, 4, 3, 7, 1 --> 10
//Ex: 5, 7, 1, 5, 2 --> 12
int main()
{
    int i;
    int arr[SIZE] = {1, 4, 3, 7, 1};
    int maxSum = arr[0] + arr[1];

    for(i = 1 ; i<SIZE - 1 ; i++) //Started from 1, not 0, and ended 1 less than End
    {
        if(maxSum < arr[i] + arr[i+1]) //If max so far is less than sum of current neighbors
            maxSum = arr[i] + arr[i+1];
    }

    printf("Max Sum of 2 Neighbors = %d\n", maxSum);

    return 0;
}
