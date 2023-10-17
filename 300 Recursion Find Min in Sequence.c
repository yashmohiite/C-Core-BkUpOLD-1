// Solutn Lec = 300

// Reffered Solutn, Lec = 300
#include<stdio.h>
#include<stdlib.h>

/*

*/

int findMin(int num)
{
    int minSoFar;
    int userInput;

    printf("Enter an I/P: ");
    scanf("%d", &userInput);

    if(num > 1)
    {
        minSoFar = findMin(num - 1);
        if(userInput < minSoFar)
            return userInput;
        else
            return minSoFar;
    }
    return userInput;
}

int main()
{
    int num, result;
    printf("Enter a Num upto you will Enter Seq & Find it's Min Val: ");
    scanf("%d", &num);
    result = findMin(num);
    printf("The Min Val is = %d\n", result);
    return 0;
}
