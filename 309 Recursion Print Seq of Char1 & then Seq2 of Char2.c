// Solutn Lec = 309

// Reffered Solutn, Lec = 310
#include<stdio.h>
#include<stdlib.h>

/*
Develop a Recursive Func that Receives:
 an Int value "total"
 a char value "char1"
 a char value "char2"
The Func should print a Seq of "Total" Char1's & then 2 * Seq of "total" Char2's
Ex:
total = 3, char1 = 'a', char2 = 'c' --> aaacccccc
total = 2, char1 = 'b', vhar2 = 'd' --> bbdddd
*/

void specialSequenceCharactersPrint(int total, char char1, char char2)
{
    if(total >= 1)
    {
        printf("%c", char1);
        specialSequenceCharactersPrint(total-1, char1, char2);
        printf("%c", char2);
        printf("%c", char2);
    }
}

int main()
{
    specialSequenceCharactersPrint(2, 'b', 'd');
    return 0;
}
