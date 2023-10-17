#include<stdio.h>
#include<stdlib.h>

//refer solution resources for this example

int main()

{
    float num1, num2;

    printf("Enter 2 floating pt. nos. \n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    if (num1 > num2)                     //in sample solution provided, if and else can have their own block like: '{ }'

        printf("Max is %f \n", num1);

    else

        printf("Max is %f \n", num2);

    if (num1 < num2)

        printf("Min is %f \n", num1);

    else

        printf("Min is %f \n", num2);


    return 0;
}
