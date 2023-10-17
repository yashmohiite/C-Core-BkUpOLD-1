// Solutn Lec = 304

// Reffered Solutn, Lec = 304
#include<stdio.h>
#include<stdlib.h>

/*
Return 1 If Sum of all Digits in Num is Odd, Else 0
*/

int digitsSumOdd(int n)
{
    int resultSoFar;
    if(n < 10)
        if(n % 2 == 0) //Even Number
            return 0;
        else //n%2 != 0 --> Odd Number
            return 1;
        resultSoFar = digitsSumOdd(n/10);
        if(n % 10 % 2 == 0) //If It's Even
            if(resultSoFar == 1) //If the result is Odd
                return 1;
            else //resultSoFar == 0 (The Result is Even)
                return 0;

        else //n % 10 % 2 == 1 //If It's Odd
            if(resultSoFar == 1) //If the Result is Odd
                return 0;
            else //The Result is Even
                return 1;
}

int main()
{
    int num;
    printf("Enter Num: ");
    scanf("%d", &num);
    printf("The Result is %d\n", digitsSumOdd(num));
    return 0;
}
