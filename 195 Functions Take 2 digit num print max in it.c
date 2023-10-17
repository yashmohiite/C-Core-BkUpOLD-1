// Solutn Lec = 195

// Refferred Solutn, Lec = 196

#include<stdio.h>
#include<stdlib.h>

//xy -> 35      35/10 = 3 ---> 5

void maxDigit(int num)
{
    if(num>99 || num<10)
        printf("The Num is not a 2 - Digit Num!\n");
    else
    {
        if(num%10 > num/10) //LHS of '>' is how we get the Right Num of a 2 Digit Num, RHS of '>' is how we get Left Num of a 2 Digit Num.
            printf("Max digit in %d is : %d\n", num, num%10);
        else
            printf("Max digit in %d is : %d\n", num, num/10);
    }
}

int main()
{
    maxDigit(91);
    return 0;
}
