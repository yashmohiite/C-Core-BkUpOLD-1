// Solutn Lec = 184

// Num = 654 ; Even : 6 + 4 = 10  ;  Odd = 5 ; Even - Odd = 5

#include<stdio.h>

int main()

{
    int num;
    int oddDigitsSum = 0, evenDigitsSum = 0;
    int currentDigit;

    printf("Enter Num : \n");
    scanf("%d", &num);

    while(num > 0)
    {
        currentDigit = num % 10;
        if (currentDigit % 2 == 0)
        {
            evenDigitsSum += currentDigit;
        }

        else
        {
            oddDigitsSum += currentDigit;
        }

        num /= 10;
    }

    printf("Even Digits Sum - Odd Digits Sum = %d - %d = %d", evenDigitsSum, oddDigitsSum, evenDigitsSum - oddDigitsSum);

    return 0;
}
