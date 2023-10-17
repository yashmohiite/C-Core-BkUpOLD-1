#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, units, tens, hundreds;
    int reversedNum; ///////////////////////////////////////////////////////////2nd Method

    printf("Enter a 3 digit no.\n");
    scanf("%d", &num);

    units = num % 10;

    tens = (num / 10) % 10;

    hundreds = num / 100;

    reversedNum = units; ///////////////////////////////////////////////////////2nd Method

    reversedNum = reversedNum * 10 + tens; /////////////////////////////////////2nd Method

    reversedNum = reversedNum * 10 + hundreds; /////////////////////////////////2nd Method

    printf("Reversed Number of %d is : %d%d%d \n", num, units, tens, hundreds);

    printf("Reversed Number of %d = %d \n\n\n", num, reversedNum); /////////////2nd Method

    return 0;
}
