// Solutn Lec = 218

//Reffered Solutn, Lec = 219
#include<stdio.h>
int main()
{
    int arr[] = {1, 4, 0, 2, 9, 4, 5};
    int i, max;

    max = arr[0];   //Assumption
    for(i=0 ; i<7 ; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Max digit in Ph No is : %d", max);

    return 0;
}
