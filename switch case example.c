#include<stdio.h>
#include<stdlib.h>

int main()

{
    char grade;

    printf("Enter grade betn (A - F) \n");
    scanf("%c", &grade);

    switch (grade)   //write the variable in paranthesis you would like to check
    {
    case 'A': //Equivalent to if Grade == 'A'.             //Note the syntax/rules for switch and case commands/blocks/etc.
        printf("Grade betn 90 - 100 \n");
        break;

    case 'B':
        printf("Grade betn 80 - 89 \n");
        break;

    case 'C':
        printf("Grade betn 70 - 79 \n");
        break;

    case 'D':
        printf("Grade betn 60 - 69 \n");
        break;

    case 'E':
        printf("Grade betn 50 - 59 \n");
        break;

    case 'F':
        printf("Grade betn 40 - 49 \n");
        break;

    default:                                    //Optional, and it is a special case
        printf("Error.........Try Again! \n");
        break;

    }

    return 0;
}
