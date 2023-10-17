#include<stdio.h>
#include<stdlib.h>

// 531 --> units = 1, tens = 30, hundreds = 500 or 1, 3, 5

int main()

// refer solution program too

{
    int data, unit, ten, hun;

    printf("Enter a 3 digit number:\n");
    scanf("%d", &data);

    unit = data % 10;

    ten = (data / 10) % 10;

    hun = data / 100;

    printf("The sum of number %d is %d\n\n\n", data, unit+ten+hun);


    return 0;
}
