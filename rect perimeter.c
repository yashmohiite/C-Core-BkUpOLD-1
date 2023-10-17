#include<stdio.h>
#include<stdlib.h>

int main()
{
    double height, width, perimeter;

    printf("Enter height of rectangle:");
    scanf("%lf", &height);

    printf("Enter width of rectangle:");
    scanf("%lf", &width);

    perimeter = 2 * (height + width);

    printf("Perimeter of rectangle = 2 * (height + width) = %lf", perimeter);

    return 0;
}
