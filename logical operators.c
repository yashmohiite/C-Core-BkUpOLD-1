#include<stdio.h>
#include<stdlib.h>

//refer original solution provided for shortcuts

int main()

{
    int money, grade;

    printf("Enter grade and money \n");
    scanf("%d%d", &grade, &money);                           // note here

    if (money < 50 && grade > 90)

        printf("This is AND \n");

    if (money < 50 || grade > 90)

        printf("This is OR \n");

    if (!(grade > 80))

        printf("This is NOT");

    return 0;
}
