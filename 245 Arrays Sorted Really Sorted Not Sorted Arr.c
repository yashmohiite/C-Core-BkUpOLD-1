// Solutn Lec = 245

// Reffered Solutn, Lec = 246
#include<stdio.h>
#include<stdlib.h>
# define SIZE 5
/*
Check if 'Really Sorted', 'Sorted', 'Not Sorted'
Ex 1: [1,2,5,7,10] --> Really Sorted (All LHS Elements less than RHS
Ex 2: [1,2,2,5,10] --> Sorted
Ex 3: [1,2,5,3,10] --> Not Sorted

*/
int main()
{
    int i;
    int arr[SIZE];
    int flag = 2; //2=Really Sorted, 1=Sorted, 0=Not Sorted

    for(i=0 ; i<SIZE ; i++)
    {
        printf("Enter Elem No. %d ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=1 ; i<SIZE ; i++)
    {
        if(arr[i-1] > arr[i]) //Elem on LHS > than Elem on RHS
        {
            flag = 0; //Not Sorted
            break;
        }
        if(arr[i-1] == arr[i])
        {
            flag = 1; //Sorted
        }
    }

    if(flag == 2)
        printf("\nReally Sorted\n");
    else if(flag == 1)
        printf("\nSorted\n");
    else if(flag==0)
        printf("\nNot Sorted\n");

    return 0;
}
