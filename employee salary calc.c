#include<stdio.h>
#include<stdlib.h>

int main()

{
    // sal per hr, total no of hrs worked, so salary = sal/hr multiplied by total no. of hours

    float sal, hrs;

    printf("Enter salary per hour\n");
    scanf("%f", &sal);

    printf("Enter hrs worked last month\n");
    scanf("%f", &hrs);

    printf("Total sal = %.2f\n\n\n", sal*hrs);

    return 0;
}
