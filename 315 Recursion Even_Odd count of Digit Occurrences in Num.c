// Solutn Lec = 315

// Reffered Solutn, Lec = 316
#include<stdio.h>
#include<stdlib.h>

/*
Develop a Recursive Func that Receives an Int Num & a Digit
The Func should return:
 1, if the count of "digit" occurrences in num is even
 0, otherwise (if the number of "digit" occurrences in num is odd
Ex:
 num = 124, digit = 2 --> 0 (1 Occurrence - Odd)
 num = 12342, digit = 2 --> 1 (2 Occurrences - Even)
 num = 10200240, digit = 0 --> 1 (4 Occurrences - Even)
*/

int digitsEvenAppearances(int num, int digit)
{
    int totalAppearancesSoFar;
    if(num < 10) //if "num" is 1 digit
        if(num != digit)
            return 1; // 0 Appearances ==> even appearances
        else //num == digit
            return 0; //digit appears once in num ==> odd appearances
        totalAppearancesSoFar = digitsEvenAppearances(num / 10, digit);
        if(totalAppearancesSoFar == 1) //So far we had even appearances of digit in num/10
            if(num % 10 == digit)
                return 0;
            else //nothing changed because digit != num%10
                return 1;
            else //totalAppearancesSoFar == 0
                if(num % 10 == digit)
                    return 1;
                else
                    return 0;
}

int main()
{
    int num, digit;
    printf("Enter a Num & Digit to scan in Num ");
    scanf("%d%d", &num, &digit);
    printf("Result = %d \n", digitsEvenAppearances(num, digit));
    return 0;
}
/*
Optimized Solutn Lec = 317

int digitsEvenAppearances(int num, int digit)
{
    if(num < 10) //If "num" is 1 digit
        if(num != digit)
            return 1; //0 appearances ==> even appearances
        else //num == digit
            return 0; //digit appears once in num ==> odd appearances
    if(num % 10 != digit)
        return digitsEvenAppearances(num / 10, digit); //keeping the status so far the same
    else //num % 1 digit
        return !digitsEvenAppearances(num / 10, digit); //changing the status(0->1 | 1->0)
}
*/
