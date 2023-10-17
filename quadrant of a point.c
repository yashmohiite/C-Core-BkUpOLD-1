#include<stdio.h>
#include<stdlib.h>

int main()

{
    float x, y;

    printf("Enter point with x and y coordinates: \n");
    scanf("%f%f", &x, &y);

    if(x > 0 && y > 0)
        printf("Pt lies in 1st quadrant \n");
    else if(x < 0 && y > 0)
        printf("Pt lies in 2nd quadrant \n");
    else if(x < 0 && y < 0)
        printf("Pt lies in 3rd quadrant \n");
    else if(x > 0 && y < 0)
        printf("Pt lies in 4th quadrant \n");
    else
        printf("Pt located at center i.e., (0,0) \n");

    return 0;
}
