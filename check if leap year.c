#include<stdio.h>
#include<stdlib.h>

/*
Conditions :
1) If the year can be divided by 4 without a remainder.
2) If the year can also be divided by 100 (without a remainder) --> then it's not a leap year.
3) Unless the year can be divided by 400 --> then it's a leap year.
*/

int main ()

{
    int year;

    printf("Enter a year: \n");
    scanf("%d", &year);

    //Rules and Conditions to check if this is a leap year

    if (year % 400 == 0)
        printf("Year %d is a Leap Year \n", year);
    else if (year % 100 == 0)
        printf("Year %d is Not a Leap Year \n", year);
    else if (year % 4 == 0)
        printf("Year %d is a Leap Year \n", year);
    else
        printf("Year %d is Not a Leap Year \n", year);

    return 0;
}
