// Solutn Lec = 313

// Reffered Solutn, Lec = 314
#include<stdio.h>
#include<stdlib.h>

/*
Develop a Recursive Func that receives an Int Num
The Func should observe the digits (from Left to Right) & Return:
 1, If they are Very Ascending
 -1, If they are Very Descending
 0, Otherwise
Assumptions:
 Initial "num" is of 2+ Digits (num >= 10)
 All digits in "num" are different (no pair of digits are the same)
Ex:
124 --> 1
12340 --> 0
9643 --> -1
*/

int digitsSorted(int num)
{
    int units = num % 10;
    int tens = (num / 10) % 10;
    int sortedSoFar;

    if(num < 100)
        if(tens < units)
            return 1;
        else // unit < tens
            return -1;

    sortedSoFar = digitsSorted(num / 10);

    if(sortedSoFar == 1 && tens < units)
        return 1;
    if(sortedSoFar == -1 && tens > units)
        return -1;
    return 0;
}

int main()
{
    int num;
    printf("Enter a 2 Digit or Greater Num, No Repetitions: ");
    scanf("%d", &num);
    printf("Result is %d \n", digitsSorted(num));
    return 0;
}
