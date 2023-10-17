// Solutn Lec = 307

// Reffered Solutn, Lec = 308
#include<stdio.h>
#include<stdlib.h>

/*
Develop a Recursive Func that Receives:
 an int value "total"
 an int value "num1"
 an int value "num2"
The Func should print a sequence of "total" Num1s & then a Seq of "total" Num2s
Ex:
total = 3, Num1 = 2, Num2 = 4 ---> 222444
total = 2, Num1 = 3, Num2 = 3 ---> 3355
*/

void specialSequencePrint(int total, int num1, int num2)
{
    if(total >= 1)
    {
        printf("%d", num1);
        specialSequencePrint(total-1, num1, num2);
        printf("%d", num2);
    }
}

int main()
{
    specialSequencePrint(7,3,5);
    return 0;
}
