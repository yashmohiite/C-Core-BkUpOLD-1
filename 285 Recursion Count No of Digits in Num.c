// Solutn Lec = 285

// Reffered Solutn, Lec = 286
#include<stdio.h>
#include<stdlib.h>

/*
num = 213 --> 3
totalCount(213) --> 1 + totalCount(21) --> 1 + 1 + totalCount(2)
*/

int countOfDigits(int num)
{
    if(num<=9) //If Num has 1 Digit / Num has now 1 Digit Left
        return 1;
    return 1 + countOfDigits(num/10);
}

int main()
{
    int num;
    printf("Insert a Num: ");
    scanf("%d", &num);

    printf("Count of Digits in %d = %d\n", num, countOfDigits(num));

    return 0;
}
