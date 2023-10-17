// Solutn Lec = 299

// Reffered Solutn, Lec = 299
#include<stdio.h>
#include<stdlib.h>

/*
Recursive Func that will get some Natural 'Num'
Read a Seq of 'Num' numbers from the User
Return Max Val in Sequence

EX: Num = 3
Seq = 1, 3, 2
*/

int findMax(int num)
{
    int maxSoFar;
    int userInput;

    printf("Enter an I/P: ");
    scanf("%d", &userInput);

    if(num > 1)
    {
        maxSoFar = findMax(num - 1);
        if(userInput > maxSoFar)
            return userInput;
        else
            return maxSoFar;
    }
    return userInput;
}

int main()
{
    int num;
    printf("Enter a Num to get that many Sequence & Get Max in that: ");
    scanf("%d", &num);
    printf("max in Seq is %d", findMax(num));
    return 0;
}
