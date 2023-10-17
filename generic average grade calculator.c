#include<stdio.h>

int main()

{
    int grade;
    int totalSum = 0, gradesCount = 0;                       //Note Initializations and reasons to declare

    printf("Please enter your Grades or '-1' to stop \n");
    scanf("%d", &grade);

    while (grade != -1)
    {
        totalSum = totalSum + grade;
        gradesCount++;

        printf("Please enter your Grades or '-1' to stop \n");      //Note this section to appear again
        scanf("%d", &grade);
    }

    printf("You have entered %d grades \n", gradesCount);

    if (gradesCount != 0)          //If user only enters -1, crash will occur, by divide by 0, refer declarations and assignments for it above and whole control flow
        printf("Your Average Grade is : %f \n", (float)totalSum / gradesCount);                     //Note here Type Casting

    return 0;
}
