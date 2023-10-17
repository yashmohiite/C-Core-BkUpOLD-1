#include<stdio.h>
#include<stdlib.h>
int main()
{
    //variables dec, assign, etc
    int num1;
    float num2;
    printf("enter int\n");
    scanf("%d", &num1);
    printf("enter floating pt.\n");
    scanf("%f", &num2);
    printf("%d + %f = %f\n\n\n", num1, num2, num1+num2);

    //year born=current year-age, by taking user inputs
    int current_year;
    int age;
    printf("enter current year\n");
    scanf("%d", &current_year);
    printf("enter age\n");
    scanf("%d", &age);
    printf("year you were born is %d - %d = %d\n\n\n", current_year, age, current_year - age);

    return 0;
}
