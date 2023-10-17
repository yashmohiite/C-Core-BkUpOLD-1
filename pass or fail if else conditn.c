#include<stdio.h>
#include<stdlib.h>

int main()

{
    int grade;

    printf("Enter grade score to determine result\n");
    scanf("%d", &grade);

    if (grade >= 60)                  //conditions always in parenthesis, no semicolon after if declaration

        printf("Congratulations\n");
    else                              //no semicolon after else keyword
        printf("Failed, try again\n\n\n");

    return 0;
}
