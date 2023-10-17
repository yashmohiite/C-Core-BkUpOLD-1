#include<stdio.h>
#include<stdlib.h>

//refer solution provided, for using : 'else if'

int main()

{
    float grade;

    printf("Enter grade \n");
    scanf("%f", &grade);

    if(grade >= 80)
        printf("Excellent job \n");
    else
    {
        if(grade >= 60)
            printf("Not bad \n");
        else
            printf("Oh... You didn't Pass \n\n\n");
    }

    return 0;
}
