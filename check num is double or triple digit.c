#include<stdio.h>
#include<stdlib.h>

//Other methods like divide by 10 and 100 and then checking the result with a specific range can also work

int main()

{
    int num;

    printf("Enter a num: \n");
    scanf("%d", &num);

    if (num > 99 && num < 1000)
        printf("Triple digit num \n");
    else if (num > 9 && num < 100)
        printf("Double digit num \n");
    else
        printf("Neither \n");

    return 0;
}
