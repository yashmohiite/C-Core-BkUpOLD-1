// Solutn Lec = 293

// Reffered Solutn, Lec = 294
#include<stdio.h>
#include<stdlib.h>

/*

*/

int sumEvenNumbers()
{
    int inputUser;
    printf("Enter a Num: ");
    scanf("%d", &inputUser);

    //Base/Stopping Condition
    if(inputUser == -1)
        return 0;

    //Recursive Calls if Conditn Satisfied
    if(inputUser % 2 == 0)
        return inputUser + sumEvenNumbers();
    return sumEvenNumbers();
}

int main()
{
    printf("Sum of Even Nos. in Sequence is %d\n", sumEvenNumbers());
    //IMP above line, Efficient/In One Line Everything
    return 0;
}
