// Solutn Lec = 311

// Reffered Solutn, Lec = 312
#include<stdio.h>
#include<stdlib.h>

/*
Write a Recursive Function that Receives:
 an Int Value "total"
 a Char "val" (Representing a Lowercase Character)
The Func should print a Seq of "total" Lowercase "vals" & then a sequence of "total" uppercase "vals"
Ex:
total = 3, val = 'c' --> cccCCC
total = 2, val = 'b' --> bbBB
*/

void printLowerUpperSequence(int total, char val)
{
    if(total >= 1)
    {
        printf("%c", val);
        printLowerUpperSequence(total - 1, val);
        printf("%c", val - 'a' + 'A');
    }
}

int main()
{
    printLowerUpperSequence(2, 'b');
    return 0;
}
