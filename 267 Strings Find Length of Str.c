// Solutn Lec = 267

// Reffered Solutn, Lec = 268
#include<stdio.h>
#include<stdlib.h>
# define SIZE 10
int strlen(char *str) //Pass Add of 1st Elem of String
{
    int i=0, length=0;
    while(str[i] != '\0')
    {
        i++;
        length++;
    }
    return length;
}

int main()
{
    int stringLength;
    char testStr[SIZE];
    gets(testStr);
    stringLength = strlen(testStr);
    printf("The L of Str '%s' is %d \n", testStr, stringLength);

    return 0;
}
