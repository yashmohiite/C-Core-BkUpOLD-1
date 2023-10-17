// Solutn Lec = 295

// Reffered Solutn, Lec = 296
#include<stdio.h>
#include<stdlib.h>

/*
Write Recursive Func that will receive Some Num 'N'
Func will Print all the No from 1 to N
EX: Num = 4 --> 1 2 3 4
*/

void printOneToN(int n)
{
    if(n >= 1)
    {
        printOneToN(n-1);
        printf("%d ", n);
    }
}

void printNToOne(int n)
{
    if(n >= 1)
    {
        printf("%d ", n);
        printNToOne(n-1);
    }
    printf("\n");
}

int main()
{
    int num;
    printf("Enter a Num: ");
    scanf("%d", &num);

    printf("All the values from 1 to %d are: \n", num);
    printOneToN(num);

    printf("\n\nAll the values from %d to 1 are: \n", num);
    printNToOne(num);

    return 0;
}
