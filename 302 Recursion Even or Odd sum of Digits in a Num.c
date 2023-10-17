// Solutn Lec = 302

// Reffered Solutn, Lec = 302
#include<stdio.h>
#include<stdlib.h>

/*
Ex:  n =156, Sum = 1 + 5 + 6 = 12, Return 1
n = 36859, Sum = 3 + 6 + 8 + 5 + 9 = 31, Return 0
*/

int digitsSumEven(int n)
{
    int resultSoFar;
    if(n < 10)
        if(n % 2 == 0)
        return 1;
    else //n%2 != 0
        return 0;
    resultSoFar = digitsSumEven(n/10);
    if(n % 10 % 2 == 0) //If it's Even, Right Most Digit
        if(resultSoFar == 1) //If the Result is Even
            return 1;
        else //resultSoFar == 0 (Result is Odd)
            return 0;

    else //n % 10 % 2 == 1 //If It's Odd
        if(resultSoFar == 1) //If the Result is Even
            return 0;
        else //the result is Odd
            return 1;
}

int main()
{
    int num;
    printf("Enter a Num to check Even Odd Sum of it's Digits: ");
    scanf("%d", &num);
    printf("Final Result is %d\n1 Means Even Sum, 0 Means Odd Sum", digitsSumEven(num));
    return 0;
}
