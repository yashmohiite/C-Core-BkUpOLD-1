#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float x1, x2, y1, y2, dist;

    printf("Enter x1: \n");
    scanf("%f", &x1);

    printf("Enter y1: \n");
    scanf("%f", &y1);

    printf("Enter x2: \n");
    scanf("%f", &x2);

    printf("Enter y2: \n");
    scanf("%f", &y2);

    dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    printf("The distance betn pt (%.2f , %.2f) and (%.2f , %.2f) is %.2f units \n\n\n", x1, y1, x2, y2, dist);

    return 0;
}
