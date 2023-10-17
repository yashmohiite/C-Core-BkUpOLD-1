// Solutn Lec = 289

// Reffered Solutn, Lec = 290
#include<stdio.h>
#include<stdlib.h>

/*
Calc No. of Appearances of a Given Char in a Seq, read a Seq of Characters from The User up Until '$' is Encountered to Stop
Ex:
Char - 'c'
Sequence - 'a', 'b', 'c', 'a', 'c', '$' ----> 2
*/

int totalCharacters(char character)
{
    char inputUser;
    printf("Please enter a Sequence character: ");
    scanf("%c", &inputUser);
    getchar(); //IMP To flush Enter after Input
    //1. Stopping / Base Conditn:
    if(inputUser == '$')
        return 0;
    //2. Recursive Calls if Matched:
    if(inputUser == character)
        return 1 + totalCharacters(character);
    return totalCharacters(character);
}

int main()
{
    char mychar;
    int result;
    printf("Enter a Character to check if matched in Sequence: ");
    scanf("%c", &mychar);
    getchar(); //IMP To flush Enter after Input
    result = totalCharacters(mychar);
    printf("Char '%c' Occurred %d times in Sequence.\n", mychar, result);

    return 0;
}
