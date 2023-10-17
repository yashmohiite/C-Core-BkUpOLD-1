// Solutn Lec = 206

//Reffered Solutn, Lec = 207
/*

Functn gets a Num(Int Type), and a "Digit"
    Should print the total Amount of Digits In Num which are Less than "Digit"
    Return Avg of those Digits(That are less than "Digit"
    Examples:
    "num" = 13572, "Digit" = 3 --> Print(2), Return 1.5
    "num" = 123123, "Digit" = 3 --> Print(4), Return 1.5
*/
#include<stdio.h>
#include<stdlib.h>
float lowerThanDigit(int num, int digit)
{
    int counter = 0, totalSum = 0;
    if(num < 0)
        num = num * (-1);
    //Digits-->[0,1,2,3,4,5,6,7,8,9]
    while(num != 0)
    {
        if(num % 10 < digit)
        {
            counter++;
            totalSum += num % 10;
        }
        num = num / 10;
    }
    printf("Total Amount of Digits in %d = %d\n", num, counter);
    return (float)totalSum / counter;
}



int main()
{
    return 0;
}
