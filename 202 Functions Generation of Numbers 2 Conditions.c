// Solutn Lec = 202

//Reffered Solutn, Lec = 202
#include<stdio.h>
#include<stdlib.h>

/*
Return -->
    if length <= 9
        123456,....,length
    else (if length > 10)
        9999...length

    Examples:
        -   length = 3 --> 123
        -   length = 5 --> 12345
        -   length = 12--> 999999999999

    length --> 3
    num = 0
    num = num * 10 + 1 = 1
    num = num * 10 + 2 = 12
    num = num * 10 + 3 = 120 + 3
*/

long onetonine(int length)
{
    int i;
    long num = 0;
    if(length <= 9)
    {
        for(i=0 ; i<length ; i++)
        {
            num = num * 10 + i + 1;
        }
    }
    else
    {
        num = nineNumber(length);
    }
    return num;
}

long nineNumber(int length)
{
    int i;
    long num = 0;
    for(i=0 ; i<length ; i++)
    {
        num = num * 10 + 9;
    }
    return num;
}

int main ()
{
    int lengthSeq;
    int result;
    printf("Enter length\n");
    scanf("%d", &lengthSeq);
    printf("Result = %d\n", result);
    return 0;
}
