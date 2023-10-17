#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Check solution for Alternative method

int main ()

{
    int num, temp;

    printf("Enter a +ve or -ve num \n");
    scanf("%d", &num);

    num = num * num;
    temp = sqrt(num);

    printf("Absolute num = |%d| \n", temp);

    return 0;
}
