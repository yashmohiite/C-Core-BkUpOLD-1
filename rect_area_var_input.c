#include<stdio.h>
#include<stdlib.h>
int main()
{
    double length;
    double breadth;
    double area;
    printf("enter l of rect\n");
    scanf("%lf", &length);
    printf("enter b of rect\n");
    scanf("%lf", &breadth);
    area=length*breadth;
    printf("Area of rect = %lf\n\n\n", area);

    return 0;
}
