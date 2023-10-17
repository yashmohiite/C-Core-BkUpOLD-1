// Solutn Lec = 305

// Reffered Solutn, Lec = 306
#include<stdio.h>
#include<stdlib.h>

/*
Recursive Func should get some Natural Number "N"
Return 1 : If every digit at an even Position has an Even Value as well as every digit at an Odd Position has an Even Value
Return 0 : Otherwise
Ex 1:
N = 36435
Pos 0: 5
Pos 1: 3
Pos 2: 4
Pos 3: 6
Pos 4: 3

Return 0

Ex 2:
N = 438
Pos 0: 8
Pos 1: 3
Pos 2: 4

Return 1

Ex 3:
N = 4385
Pos 0: 5
Pos 1: 8
Pos 2: 3
Pos 3: 4
*/

int evenOddFunc(int n)
{
    if(n < 10) // 1 Digit Number --> Even Position
        if(n % 2 == 0) // The Value is Even
            return 1;
        else
            return 0;

    if(n < 100) // 2 Digits Number --> The Right most Digit (Even Pos) & Left Digit (Odd Pos)
        if(n % 10 % 2 == 0 && n / 10 % 2 == 1) //Before '&&' Checking for Right Hand Digit, After '&&' Checking for Left Hand Side Digit
            return 1;
        else
            return 0;

        if((n % 10 % 2 == 0) && (n / 10 % 10 % 2 == 1))
            return evenOddFunc(n / 100);
        else
            return 0;
}

int main()
{
    int num;
    printf("Enter Num: ");
    scanf("%d", &num);
    printf("Final Result = %d\n", evenOddFunc(num));
    return 0;
}
