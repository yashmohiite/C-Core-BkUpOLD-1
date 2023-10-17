#include<stdio.h>

int main ()

{
    char ch;

    printf("Enter a character to check if it is Upper case, Lower case, Digit or Other : \n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("It is an Uppercase \n");

    else if (ch >= 'a' && ch <= 'z')
        printf("It is a Lowercase \n");

    else if (ch >= '0' && ch <= '9')
        printf("It is a Digit \n");

    else
        printf("It is something else/other \n");

    return 0;
}
