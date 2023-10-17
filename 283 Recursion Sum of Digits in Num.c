// Solutn Lec = 283

// Reffered Solutn, Lec = 284
#include<stdio.h>
#include<stdlib.h>

//sumOfDigits(213) = 3 + sumOfDigits(21) = 3 + 1 + sumOfDigits(2)

int sumOfDigits(int num)
{
    if(num<=9) //If Num has 1 Digit / Num has 1 Digit Left
        return num;
    return num%10 + sumOfDigits(num/10);
}

int main()
{
    int num;
    printf("Insert a Num: \n");
    scanf("%d", &num);
    printf("Sum of Digits for %d = %d\n", num, sumOfDigits(num));
    return 0;
}
