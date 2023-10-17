// Solutn Lec = 347

// Referred Solutn, Lec = 348
#include<stdio.h>
#include<stdlib.h>

/*

*/

#define SIZE 8

int main()
{
    int arr[SIZE] = {0,5,4,2,1,3,2,0};
    int countArr[6] = {0};
    int i;
    for(i=0 ; i<SIZE ; i++)
    {
        countArr[arr[i]]++;
    }
    for(i=0 ; i<8 ; i++)
    {
        printf("%d value appeared %d times\n", arr[i], countArr[arr[i]]);
    }
    return 0;
}
